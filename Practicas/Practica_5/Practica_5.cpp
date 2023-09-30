#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu();

int msgs();

int generar_num(void);

void loteria(void);

void carrera(void);

typedef struct 
{
    char nombre[10];
    int velocidad;
    float tiempo;
} Coche;

void iniciarCarrera(Coche * coche);

int main()
{
    menu();

    return 0;
}

int msgs()
{
    int op;
    system ("CLS");

    printf("------MENU------\n");
    printf("\n1 - Simulacion de Juego de Loteria\n");
    printf("2 - Simulacion de Carreras de Coches\n");
    printf("0 - Salir del Programa\n");
    scanf("%d", &op);

    return op;
}

void menu()
{
    int op;
    do
    {
        op = msgs();
        switch (op)
        {
        case 1:
            loteria();

            break;

        case 2:
            carrera();

            break;
        
        default:
            break;
        }
    }
    while (op != 0);
    
    printf("Saliendo del Programa");
    
}

int generar_num()
{
    return rand() % 100 + 1;
}

void loteria()
{
    system ("CLS");
    // Inicializar el generador de numeros aleatorios
    srand(time(0));

    // Inicializar el numero ganador solo una vez
    static int numeroGanador = generar_num();

    // Obtener un numero aleatorio para el jugador
    int numeroJugador = generar_num();

    printf("Tu numero de loteria es: %d\n", numeroJugador);

    // Comparar el numero del jugador con el numero ganador
    if (numeroJugador == numeroGanador) 
    {
        printf("¡Felicidades, ganaste la loteria!\n");
    } else 
    {
        printf("Lo siento, no ganaste esta vez.\n");
    }

    system ("PAUSE");
}


void iniciarCarrera(Coche * coche) 
{
    int distancia = 1000; // Distancia en metros
    coche->velocidad = 100 + rand() % 101; // Velocidad aleatoria entre 100 y 200
    coche->tiempo = (float)distancia / coche->velocidad; // Tiempo = distancia / velocidad
}

void carrera()
{
    system ("CLS");
    srand(time(0)); // Semilla para numeros aleatorios

    Coche coche1 = {"Coche #1", 0, 0.0};
    Coche coche2 = {"Coche #2", 0, 0.0};
    Coche coche3 = {"Coche #3", 0, 0.0};

    iniciarCarrera(&coche1);
    iniciarCarrera(&coche2);
    iniciarCarrera(&coche3);

    printf("%s viajo a %d km/h y tardo %.2f horas\n", coche1.nombre, coche1.velocidad, coche1.tiempo);
    printf("%s viajo a %d km/h y tardo %.2f horas\n", coche2.nombre, coche2.velocidad, coche2.tiempo);
    printf("%s viajo a %d km/h y tardo %.2f horas\n", coche3.nombre, coche3.velocidad, coche3.tiempo);

    if (coche1.tiempo < coche2.tiempo && coche1.tiempo < coche3.tiempo) 
    {
        printf("\n%s es el ganador!\n", coche1.nombre);
    } 

    else if (coche2.tiempo < coche1.tiempo && coche2.tiempo < coche3.tiempo) 
    {
        printf("\n%s es el ganador!\n", coche2.nombre);
    } 

    else 
    {
        printf("\n%s es el ganador!\n", coche3.nombre);
    }

    system ("PAUSE");
}
