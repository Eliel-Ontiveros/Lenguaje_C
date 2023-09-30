#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct 
{
    char nombre[10];
    int velocidad;
    float tiempo;
} Coche;

void iniciarCarrera(Coche * coche) 
{
    int distancia = 1000; // Distancia en metros
    coche->velocidad = 100 + rand() % 101; // Velocidad aleatoria entre 100 y 200
    coche->tiempo = (float)distancia / coche->velocidad; // Tiempo = distancia / velocidad
}

int main() 
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

    return 0;
}
