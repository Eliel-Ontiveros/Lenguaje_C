/*
Modificar_Arreglo
Eliel Alfonso Ontiveros Ojeda
17/Oct/2023
Agregar Descripcion del Programa Realizado
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumaAElementos(int *ptr, int num);

int main()
{
    system("CLS");
    srand(time(NULL));
    int num = 4;
    int arreglo[10];
    int *ptr = &arreglo[0];
    for (int i = 0; i < 10; i++)
    {
        arreglo[i] = 100 + rand() % 400;
    }

    printf("---Arreglo Original---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Elemento %d es = %d\n", i, arreglo[i]);
    }

    sumaAElementos(ptr, num);

    printf("---Arreglo Modificado---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Elemento %i es = %d\n", i, ptr[i]);
    }

    return 0;
}

int sumaAElementos(int *ptr, int num)
{
    for (int i = 0; i < 10; i++)
    {
        ptr[i] += num;
    }
    return *ptr;
}