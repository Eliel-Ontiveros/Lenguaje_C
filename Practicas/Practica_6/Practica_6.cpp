/*
Practica_Apuntadores_Argumentos de Funciones
Eliel Alfonso Ontiveros Ojeda_368746
11-Oct-2023
programa en C que realice operaciones básicas en arreglos utilizando apuntadores y funciones. 
Deberás crear un menú interactivo que permita al usuario elegir entre varias operaciones en un arreglo. 
Las operaciones incluirán la suma de elementos de un arreglo, la copia de arreglos, la concatenación de arreglos y la comparación de arreglos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(void);
int msgs();
int suma_arreglo();
int copiar_arreglo();
int concat_arreglo();
int compara_arreglo();
int encon_elem_maxim();

int main()
{
    menu();

    return 0;

}


/*Desarrollo Funcion msgs*/
int msgs()
{
    int op;
    system ("CLS");
    printf("----MENU----\n");
    printf("1 - Suma de Arreglos\n");
    printf("2 - Copiar Arreglo\n");
    printf("3 - Concatenar Arreglo\n");
    printf("4 - Comparar Arreglos\n");
    printf("5 - Encontrar Elemento Maximo De Arreglo\n");
    scanf("%d", &op);

    return op;

}

/*Desarrollo Funcion Menu*/
void menu()
{
    int op;
    
    do
    {
        op = msgs();
        switch (op)
        {
        case 1:
            suma_arreglo();
            break;

        case 2:
            copiar_arreglo();
            break;

        case 3:
            concat_arreglo();
            break;

        case 4:
            compara_arreglo();
            break;

        case 5:
            encon_elem_maxim();
            break;
        
        default:
            break;
        }

    } while (op != 0);

    printf("Saliendo del Programa\n");
    
}

int suma_arreglo()
{
    printf("Op 1");

    system ("PAUSE");
}

int copiar_arreglo()
{
    printf("Op 2");

    system("PAUSE");
}

int concat_arreglo()
{
    printf("Op 3");

    system("PAUSE");
}

int compara_arreglo()
{
    printf("Op 4");

    system("PAUSE");
}

int encon_elem_maxim()
{
    printf("Op 5");

    system("PAUSE");
}