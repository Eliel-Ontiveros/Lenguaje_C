import os
import cv2 as cv
import numpy as np

print("cargando....")
DIR = r'C:/Users/Eliel/OneDrive/Documentos/Universidad/Lenguaje_C/Lenguaje_C/Actividades/Caras/train'
people = [person for person in os.listdir(DIR) if os.path.isdir(os.path.join(DIR, person))]

haar_cascade = cv.CascadeClassifier('haar_face.xml')

features = []
labels = []

def create_train():
    global people 
    
    for person in os.listdir(DIR):
        print(f'Entrenando para: {person}')
        if os.path.isdir(os.path.join(DIR, person)) and person not in people:
            people.append(person)

        path = os.path.join(DIR, person)
        label = people.index(person)

        for img in os.listdir(path):
            img_path = os.path.join(path, img)

            img_array = cv.imread(img_path)
            if img_array is None:
                continue

            gray = cv.cvtColor(img_array, cv.COLOR_BGR2GRAY)

            faces_rect = haar_cascade.detectMultiScale(gray, scaleFactor=1.1, minNeighbors=4)

            for (x, y, w, h) in faces_rect:
                faces_roi = gray[y:y+h, x:x+w]
                features.append(faces_roi)
                labels.append(label)

create_train()
print('Entrenamiento finalizado ---------------')

features = np.array(features, dtype='object')
labels = np.array(labels)

face_recognizer = cv.face.LBPHFaceRecognizer_create()

face_recognizer.train(features, labels)

face_recognizer.save('face_trained.yml')
np.save('features.npy', features)
np.save('labels.npy', labels)

def get_people_list():
    return people