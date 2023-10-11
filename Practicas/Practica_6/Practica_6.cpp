/*
Practica_Apuntadores_Argumentos de Funciones
Eliel Alfonso Ontiveros Ojeda_368746
11-Oct-2023
programa en C que realice operaciones básicas en arreglos utilizando apuntadores y funciones. 
Deberás crear un menú interactivo que permita al usuario elegir entre varias operaciones en un arreglo. 
Las operaciones incluirán la suma de elementos de un arreglo, la copia de arreglos, la concatenación de arreglos y la comparación de arreglos.
*/

#include "chntoky.h"

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
    printf("1 - Llenar vectores\n");
    printf("2 - Suma de Arreglos\n");
    printf("3 - Copiar Arreglo\n");
    printf("4 - Concatenar Arreglo\n");
    printf("5 - Comparar Arreglos\n");
    printf("6 - Encontrar Elemento Maximo De Arreglo\n");
    printf("0 - Salir del Programa\n");
    scanf("%d", &op);

    return op;

}

/*Desarrollo Funcion Menu*/
void menu()
{
    int op;
    int vect_1[15];
    int vect_2[15];

    do
    {
        op = msgs();
        switch (op)
        {
        case 1:
            llenar_vector(vect_1, 15, 1, 20);    
            llenar_vector(vect_2, 15, 1, 20);
            break;

        case 2:
            suma_arreglo();
            break;

        case 3:
            copiar_arreglo();
            break;

        case 4:
            concat_arreglo();
            break;

        case 5:
            compara_arreglo();
            break;

        case 6:
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