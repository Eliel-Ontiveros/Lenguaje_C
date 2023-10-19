/*
Practica_Apuntadores_Argumentos de Funciones
Eliel Alfonso Ontiveros Ojeda_368746
11-Oct-2023
Programa en C que realice operaciones básicas en arreglos utilizando apuntadores y funciones.
Deberás crear un menú interactivo que permita al usuario elegir entre varias operaciones en un arreglo.
Las operaciones incluirán la suma de elementos de un arreglo, la copia de arreglos, la concatenación de arreglos y la comparación de arreglos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(void);
int msgs();
void suma_arreglo(int *ptr);
void copiar_arreglo(int *ptr, int *punt);
void concat_arreglo(int *ptr, int *punt, int *point);
int compara_arreglo(int *ptr, int *punt);
void encon_elem_maxim(int *ptr);

int main()
{
    srand(time(NULL));
    menu();

    return 0;
}

/*Desarrollo Funcion msgs*/
int msgs()
{
    int op;
    system("CLS");
    printf("----MENU----\n");
    printf("1 - Suma de Arreglos\n");
    printf("2 - Copiar Arreglo\n");
    printf("3 - Concatenar Arreglo\n");
    printf("4 - Comparar Arreglos\n");
    printf("5 - Encontrar Elemento Maximo De Arreglo\n");
    printf("0 - Salir del Programa\n");
    scanf("%d", &op);

    return op;
}

/*Desarrollo Funcion Menu*/
void menu()
{
    int op;
    int vect_1[10];
    int vect_2[10];
    int vect_3[20];

    do
    {
        op = msgs();
        switch (op)
        {
        case 1:
            suma_arreglo(vect_1);
            break;

        case 2:
            copiar_arreglo(vect_1, vect_2);
            break;

        case 3:
            concat_arreglo(vect_1, vect_2, vect_3);
            break;

        case 4:
            compara_arreglo(vect_1, vect_2);
            if (compara_arreglo(vect_1, vect_2) == 1)
            {
                printf("Los arreglos son iguales\n");
            }
            else
            {
                printf("Los arreglos son diferentes\n");
            }

            system("PAUSE");

            break;

        case 5:
            encon_elem_maxim(vect_1);
            break;

        default:
            break;
        }

    } while (op != 0);

    printf("Saliendo del Programa\n");
}

/*
Realiza la operación de suma de elementos en un arreglo
genera un arreglo aleatorio de 10 elementos, muestra sus valores, 
calcula la suma de los elementos y la imprime en la consola
*/
void suma_arreglo(int *ptr)
{
    printf("Op 1\n");
    int suma = 0;
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 100 + rand() % 400;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Elemento %d = %d\n", i, ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        suma += ptr[i];
    }

    printf("El resultado de la suma del arreglo es = %d\n", suma);

    system("PAUSE");
}

/*
Crea un arreglo original, copia sus elementos en otro arreglo y muestra ambos arreglos en la consola 
se utiliza para demostrar cómo se copian elementos de un arreglo a otro
*/
void copiar_arreglo(int *ptr, int *punt)
{
    printf("Arreglo Original\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 100 + rand() % 400;
        printf("Elemento %d = %d\n", i, ptr[i]);
    }

    printf("\nArreglo Copiado\n");
    for (int i = 0; i < 10; i++)
    {
        punt[i] = ptr[i];                       
        printf("Elemento %d = %d\n", i, punt[i]); 
    }

    system("PAUSE");

}

/*
Crea dos arreglos originales, luego concatena sus elementos en un tercer arreglo 
y muestra los tres arreglos en la consola, esto demuestra cómo se pueden combinar 
elementos de dos arreglos en un tercero
*/
void concat_arreglo(int *ptr, int *punt, int *point)
{
    printf("---Arreglo 1---\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 100 + rand() % 400;
        printf("Elemento %d = %d\n", i, ptr[i]);
    }

    printf("---Arreglo 2---\n");
    for (int i = 0; i < 10; i++)
    {
        punt[i] = 100 + rand() % 400;
        printf("Elemento %d = %d\n", i, punt[i]);
    }

    printf("---Arreglo 3---\n");
    for (int i = 0; i < 10; i++) {
        point[i] = ptr[i];
        printf("Elemento %d = %d\n", i, point[i]);
    }

    for (int i = 10; i < 20; i++) {
        point[i] = punt[i - 10];
        printf("Elemento %d = %d\n", i, point[i]);
    }

    system("PAUSE");
}

/*
Compara dos arreglos elemento por elemento y devuelve 1 si son iguales y 0 si son 
diferentes se utilizan arreglos aleatorios para demostrar la comparación de arreglos
*/
int compara_arreglo(int *ptr, int *punt)
{
    printf("---Arreglo 1---\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 100 + rand() % 400;
        printf("Elemento %d = %d\n", i, ptr[i]);
    }

    printf("---Arreglo 2---\n");
    for (int i = 0; i < 10; i++)
    {
        punt[i] = 100 + rand() % 400;
        printf("Elemento %d = %d\n", i, punt[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (ptr[i] != punt[i])
        {
            return 0;
        }
    }

    return 1;
    
}

/*
Genera un arreglo aleatorio de 10 elementos 
y encuentra el valor máximo en ese arreglo 
Luego muestra el elemento máximo en la consola
*/
void encon_elem_maxim(int *ptr)
{
    
    printf("---Arreglo---\n");
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 100 + rand() % 400;
        printf("Elemento %d = %d\n", i, ptr[i]);
    }

    int max = ptr[0];
    for (int i = 0; i < 10; i++)
    {
        if(ptr[i] > max)
        {
            max = ptr[i];
        }
    }

    printf("El elemento maximo = %d\n", max);
    
    system("PAUSE");
}