/*
Practica_Clase de Almacenamiento
Eliel Alfonso Ontiveros Ojeda_368746
30-Sep-2023
Programa en donde se le pida al usuario que opcion es la que quiere realizar, Jugar Loteria o Jugar a las Carreras de Coches
*/

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <time.h> // Incluye la biblioteca de tiempo para funciones relacionadas con el tiempo
#include <stdlib.h> // Incluye la biblioteca estándar de la biblioteca

void menu(); // Declaración de la función del menú

int msgs(); // Declaración de la función de mensajes

int generar_num(void); // Declaración de la función para generar números

void loteria(void); // Declaración de la función de la lotería

void carrera(void); // Declaración de la función de la carrera

typedef struct // Definición de la estructura del coche
{
    char nombre[10]; // Nombre del coche
    int velocidad; // Velocidad del coche
    float tiempo; // Tiempo que tarda el coche
} Coche;

void iniciarCarrera(Coche * coche); // Declaración de la función para iniciar la carrera

int main() // Función principal
{
    menu(); // Llamada a la función del menú

    return 0; // Retorna 0 si el programa se ejecuta correctamente
}

int msgs() // Función de mensajes
{
    int op; // Declaración de la variable de opción
    system ("CLS"); // Limpia la pantalla

    printf("------MENU------\n"); // Imprime el menú
    printf("\n1 - Simulacion de Juego de Loteria\n"); // Opción de la lotería
    printf("2 - Simulacion de Carreras de Coches\n"); // Opción de la carrera
    printf("0 - Salir del Programa\n"); // Opción para salir del programa
    scanf("%d", &op); // Lee la opción del usuario

    return op; // Retorna la opción del usuario
}

void menu() // Función del menú
{
    int op; // Declaración de la variable de opción
    do
    {
        op = msgs(); // Llamada a la función de mensajes
        switch (op) // Switch para las opciones
        {
        case 1:
            loteria(); // Llamada a la función de la lotería

            break;

        case 2:
            carrera(); // Llamada a la función de la carrera

            break;
        
        default:
            break;
        }
    }
    while (op != 0); // Mientras la opción no sea 0, el menú se seguirá mostrando
    
    printf("Saliendo del Programa"); // Mensaje de salida del programa
    
}

int generar_num() // Función para generar números
{
    return rand() % 100 + 1; // Retorna un número aleatorio entre 1 y 100
}

void loteria() // Función de la lotería
{
    system ("CLS"); // Limpia la pantalla
    srand(time(0)); // Inicializa el generador de números aleatorios

    static int numeroGanador = generar_num(); // Inicializa el número ganador solo una vez

    int numeroJugador = generar_num(); // Obtiene un número aleatorio para el jugador

    printf("Tu numero de loteria es: %d\n", numeroJugador); // Imprime el número del jugador

    if (numeroJugador == numeroGanador) // Compara el número del jugador con el número ganador
    {
        printf("¡Felicidades, ganaste la loteria!\n"); // Mensaje de ganador
    } else 
    {
        printf("Lo siento, no ganaste esta vez.\n"); // Mensaje de perdedor
    }

    system ("PAUSE"); // Pausa el programa
}


void iniciarCarrera(Coche * coche) // Función para iniciar la carrera
{
    int distancia = 1000; // Distancia en metros
    coche->velocidad = 100 + rand() % 101; // Velocidad aleatoria entre 100 y 200
    coche->tiempo = (float)distancia / coche->velocidad; // Tiempo = distancia / velocidad
}

void carrera() // Función de la carrera
{
    system ("CLS"); // Limpia la pantalla
    srand(time(0)); // Semilla para números aleatorios

    Coche coche1 = {"Coche #1", 0, 0.0}; // Inicialización del coche 1
    Coche coche2 = {"Coche #2", 0, 0.0}; // Inicialización del coche 2
    Coche coche3 = {"Coche #3", 0, 0.0}; // Inicialización del coche 3

    iniciarCarrera(&coche1); // Inicia la carrera para el coche 1
    iniciarCarrera(&coche2); // Inicia la carrera para el coche 2
    iniciarCarrera(&coche3); // Inicia la carrera para el coche 3

    printf("%s viajo a %d km/h y tardo %.2f horas\n", coche1.nombre, coche1.velocidad, coche1.tiempo); // Imprime los resultados del coche 1
    printf("%s viajo a %d km/h y tardo %.2f horas\n", coche2.nombre, coche2.velocidad, coche2.tiempo); // Imprime los resultados del coche 2
    printf("%s viajo a %d km/h y tardo %.2f horas\n", coche3.nombre, coche3.velocidad, coche3.tiempo); // Imprime los resultados del coche 3

    if (coche1.tiempo < coche2.tiempo && coche1.tiempo < coche3.tiempo) // Si el coche 1 es el más rápido
    {
        printf("\n%s es el ganador!\n", coche1.nombre); // Mensaje de ganador del coche 1
    } 

    else if (coche2.tiempo < coche1.tiempo && coche2.tiempo < coche3.tiempo) // Si el coche 2 es el más rápido
    {
        printf("\n%s es el ganador!\n", coche2.nombre); // Mensaje de ganador del coche 2
    } 

    else // Si el coche 3 es el más rápido
    {
        printf("\n%s es el ganador!\n", coche3.nombre); // Mensaje de ganador del coche 3
    }

    system ("PAUSE"); // Pausa el programa
}
