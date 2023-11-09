/*
Practica_Punteros
Eliel Alfonso Ontiveros Ojeda_368746
01/Nov/2023
Crear un programa que realice las siguientes acciones:
a) Argumentos en la Linea de Comandos
    1. Crea un programa que tome dos números enteros como argumentos desde la línea de comandos
    2. Utiliza apuntadores para capturar estos argumentos y realizar las siguientes operaciones:
        -> Suma los dos números y muestra el resultado
        -> Resta el segundo número del primero y muestra el resultado
        -> Multiplica los dos números y muestra el resultado
        -> Divide el primer número por el segundo y muestra el resultado

b) Ordenacion de palabras
    1. Crea un programa que incluya un arreglo de apuntadores a caracteres, donde cada apuntador apunta a una palabra (por ejemplo, "manzana",
    "banana", "cereza", "uva", "naranja")
    2. Utiliza apuntadores y la aritmética de direcciones para ordenar las palabras en orden alfabético
    3. Imprime las palabras ordenadas en la consola

c) Matriz Multidimensional
    1. Crea una matriz bidimensional de enteros, por ejemplo, 3x3, con algunos valores
    2. Utiliza apuntadores y la aritmética de direcciones para recorrer la matriz y realizar las siguientes operaciones:
        -> Calcula la suma de todos los elementos de la matriz
        -> Encuentra el elemento más grande en la matriz y muestra su valor y posición
*/

#include "chntoky.h"
#include <string.h>

int msge();
void menu(int a, int b);

void linea_comando(int a, int b);
void ordenar_arreglo();
void matriz_multi(int *ptr);

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Debe proporcionar al menos dos números enteros como argumentos en la línea de comandos.\n");
        return 1; // Salir del programa con un código de error
    }

    int num_1, num_2;
    num_1 = atoi(argv[1]);
    num_2 = atoi(argv[2]);

    menu(num_1, num_2);
    return 0;
}

int msge()
{
    int op;
    printf("1.- Argumentos en linea de comandos\n");
    printf("2.- Ordenacion de palabras\n");
    printf("3.- Matriz multidimensional\n");
    printf("0.- Salir\n");
    op = validar_num("Seleccione la opcion que desea realizar: ", 0, 3);
    return op;
}

void menu(int a, int b)
{
    int op;
    int random[3][3] = {{30, 2, 4}, {10, 32, 42}, {32, 21, 99}};
    do
    {
        system("CLS");
        op = msge();
        system("CLS");
        switch (op)
        {
        case 1:
            linea_comando(a, b);
            break;
        case 2:
            ordenar_arreglo();
            break;
        case 3:
            matriz_multi(&random[0][0]);
            break;
        }
    } while (op != 0);
}

void linea_comando(int a, int b)
{
    printf("El resultado de la suma es: %d\n", a + b);
    printf("El resultado de la resta es: %d\n", a - b);
    printf("El resultado de la multiplicacion es: %d\n", a * b);
    printf("El resultado de la division es: %d\n", a / b);
    system("PAUSE");
}

void ordenar_arreglo()
{

    char ctrs[][15] = {"Manzana", "Banana", "Cereza", "Uva", "Naranja", "Guanabana", "Toronja", "Durazno", "Melon"};
    char *q[9] = {ctrs[0], ctrs[1], ctrs[2], ctrs[3], ctrs[4], ctrs[5], ctrs[6], ctrs[7], ctrs[8]};

    int i, j;
    printf("Arreglo sin ordenar\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d - %s\n", i + 1, q[i]);
    }
    printf("Arreglo ordenado\n");
    char *temp;
    for (i = 0; i < 9 - 1; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (strcmp(q[i], q[j]) > 0)
            {
                temp = q[i];
                q[i] = q[j];
                q[j] = temp;
            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        printf("%d - %s\n", i + 1, q[i]);
    }
    system("PAUSE");
}

void matriz_multi(int *ptr)
{
    int i, j;
    int resultado;
    int max = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]  ", *(ptr + i * 3 + j));
            resultado += *(ptr + i * 3 + j);
            if (max < *(ptr + i * 3 + j))
            {
                max = *(ptr + i * 3 + j);
            }
        }
        printf("\n");
    }
    printf("La suma de los valores es = %d\n", resultado);
    printf("El numero mayor es = %d\n", max);
    system("PAUSE");
}