/*
Apuntadores_Arreglos
Eliel Alfonso Ontiveros Ojeda
17/Oct/2023
Agregar Descripcion del programa desarrollado
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int arreglo[7];
    int *ptr = &arreglo[0];

    for (int i = 0; i < 7; i++)
    {
        arreglo[i] = 1 + rand() % 50;
    }

    for (int i = 0; i < 7; i++)
    {
        printf("El valor de la posicion %d es = %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}