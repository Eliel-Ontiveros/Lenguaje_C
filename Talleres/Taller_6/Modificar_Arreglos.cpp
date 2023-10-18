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
    srand(time(NULL));
    int num = 4;
    int arreglo[10];
    int *ptr = &arreglo[0];
    for (int i = 0; i < 10; i++)
    {
        arreglo[i] = 1 + rand() % 20;
    }
    
    for (int i = 0; i < 10 ; i++)
    {
        printf("Elemento %d es = %d\n", i, arreglo[i]);
    }

    sumaAElementos(ptr, num);

    for (int i = 0; i < 10; i++)
    {
        printf("Elemento %i es = %d\n", i, ptr[i]);
        ptr ++;
    }
    
    

    return 0;
}

int sumaAElementos(int *ptr, int num)
{
    for (int i = 0; i < 10; i++)
    {
        ptr[i] += num;
    }

}