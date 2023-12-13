import numpy as np
import cv2 as cv
import os
import time
import importlib
import face_trained

haar_cascade = cv.CascadeClassifier('haar_face.xml')

people = face_trained.get_people_list()


face_recognizer = cv.face.LBPHFaceRecognizer_create()
face_recognizer.read('face_trained.yml')

cap = cv.VideoCapture(0)

output_folder = 'C:/Users/Eliel/OneDrive/Documentos/Universidad/Lenguaje_C/Lenguaje_C/Actividades/Caras/train'
os.makedirs(output_folder, exist_ok=True)

output_folder_registro = 'C:/Users/Eliel/OneDrive/Documentos/Universidad/Lenguaje_C/Lenguaje_C/Actividades/Caras/Registros'

for person in people:
    output_folder_person = os.path.join(output_folder, person)
    os.makedirs(output_folder_person, exist_ok=True)
    
def contar_archivos_en_carpeta(carpeta):
    return len([nombre_archivo for nombre_archivo in os.listdir(carpeta) if os.path.isfile(os.path.join(carpeta, nombre_archivo))])

limite_archivos = 300

photo_counter = 0

nombre_usuario = ""

ventana_abierta = False

capturing_flag = False

personas_detectadas = set()

registro_path = os.path.join(output_folder_registro, 'registro.txt')

while cap.isOpened():
    ret, frame = cap.read()

    if not ret:
        print("Error reading from the camera.")
        break

    gray = cv.cvtColor(frame, cv.COLOR_BGR2GRAY)
    cv.putText(frame, (time.strftime("%d/%m/%y")), (10, 40), cv.FONT_HERSHEY_COMPLEX, 0.5, (0, 0, 255), thickness=2)
    cv.putText(frame, (time.strftime("%H:%M:%S")), (10, 20), cv.FONT_HERSHEY_COMPLEX, 0.5, (0, 0, 255), thickness=2)
    cv.putText(frame, ("Y -> Agregar Nuevo Usuario"), (10, 450), cv.FONT_HERSHEY_COMPLEX, 0.5, (0, 0, 255), thickness=2) 
    faces_rect = haar_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=4)
    cantidad_archivos = contar_archivos_en_carpeta(output_folder_person)
    
    personas_en_frame = set()
    faces_count = 0 

    for (x, y, w, h) in faces_rect:
        faces_roi = gray[y:y + h, x:x + w]
        label, confidence = face_recognizer.predict(faces_roi)

        if 0 <= label < len(people):
            personas_en_frame.add(people[label])
            personas_detectadas.update(personas_en_frame)
            faces_count += 1
            cv.putText(frame, f'Caras detectadas: {faces_count}', (10, 80), cv.FONT_HERSHEY_COMPLEX, 0.5, (0, 255, 0), thickness=2)  # Display face count

            if confidence > 35:
                print(f'Desconocido')
                cv.putText(frame, str('Desconocido'), (x, y - 10), cv.FONT_HERSHEY_COMPLEX, 1.0, (0, 0, 255), thickness=2)
                cv.rectangle(frame, (x, y), (x + w, y + h), (0, 0, 255), thickness=2)
            else:
                print(f'Nombre = {people[label]} con una desconfianza de: {confidence}')
                cv.putText(frame, str(people[label]), (x, y - 10), cv.FONT_HERSHEY_COMPLEX, 1.0, (0, 255, 0), thickness=2)
                cv.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), thickness=2)

                with open(registro_path, 'a') as registro_file:
                    registro_file.write(f'{time.strftime("%Y-%m-%d %H:%M:%S")}: Cara conocida - {people[label]}\n')

        else:
            print(f'Label {label} is out of range for the people list.')
            
    cv.imshow('Face Recognition', frame)
    
    
    if ventana_abierta:
        frame_secundaria = np.zeros_like(frame)
        cv.putText(frame_secundaria, "Introduce el nombre del nuevo usuario:", (10, 80), cv.FONT_HERSHEY_COMPLEX, 0.7, (255, 255, 255), thickness=2)
        cv.putText(frame_secundaria, nombre_usuario, (10, 120), cv.FONT_HERSHEY_COMPLEX, 0.7, (255, 255, 255), thickness=2)
        cv.imshow('Ventana Secundaria', frame_secundaria)

    cv.putText(frame, "Introduce el nombre del nuevo usuario:", (10, 80), cv.FONT_HERSHEY_COMPLEX, 0.7, (255, 255, 255), thickness=2)
    cv.putText(frame, nombre_usuario, (10, 120), cv.FONT_HERSHEY_COMPLEX, 0.7, (255, 255, 255), thickness=2)
    
    key = cv.waitKey(1)

    if key == 27:
        break
    elif key == ord('y') and not ventana_abierta:
        ventana_abierta = True
        cv.namedWindow('Ventana Secundaria', cv.WINDOW_NORMAL)
        
    elif key == 13 and ventana_abierta:  
        output_folder_person = os.path.join(output_folder, nombre_usuario)
        os.makedirs(output_folder_person, exist_ok=True)
        print(f"Nuevo usuario creado: {nombre_usuario}")
        nombre_usuario = "" 
        ventana_abierta = False 
        cv.destroyWindow('Ventana Secundaria')
        
        
    elif key == 8 and ventana_abierta:  
        nombre_usuario = nombre_usuario[:-1]
        
    elif key != -1 and ventana_abierta:

        nombre_usuario += chr(key)
        
    elif key == 32:
        capturing_flag = True
        photo_counter = 0
    if capturing_flag:
        for _ in range(2):
            cv.putText(frame, f'Cantidad de archivos: {photo_counter}/{limite_archivos}', (10, 60), cv.FONT_HERSHEY_COMPLEX, 0.5, (0, 255, 0), thickness=2)
            photo_counter += 1
            photo_path = os.path.join(output_folder_person, f'rostro_{photo_counter}.jpg')
            cv.imwrite(photo_path, frame)
            print(f"Foto guardada: {photo_path}")

        if photo_counter >= limite_archivos:
            capturing_flag = False



cap.release()
cv.destroyAllWindows()