//Juego de adivinanza de numeros con Etiquetas y "Goto"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    inicio:
    printf("Bienvenidos a este juego para adividar un numero aleatorio\n");

    adivinanza:
    int control = 0;
    int intentos = 1;
    int num_sel;
    int num;
    int max = 100;
    int min = 0;
    int cant = 1;
    int i;
    printf("Ingrese un numero entre el 1 y el 100\n");
    scanf("%d", &num_sel);
    for (i = 0; i < cant; i++)
    {
        num = (rand() % (max - min + 1) + min);
        printf("Numero aleatorio = %d", num);
    }
    while (control == 0)
    {
        printf("\nIntento numero: %d\n", intentos);
        printf("\nIngrese un numero entre el 1 y el 100\n");
        scanf("%d", &num_sel);
        if (num_sel == num)
        {
            goto reinicio;
        }
        else
        {
            goto adivinanza;
        }

    }
    
    reinicio:
    int op;
    printf("\nQuieres volver a jugar?\n");
    printf("1 - Si\n");
    printf("2 - No\n");
    scanf("%d", &op);
    if (op == 1)
    {
        goto adivinanza;
    }
    else
    {
        if (op == 2)
        {
            printf("Muchas gracias por jugar\n");

            return 0;
        }

        else
        {
            goto reinicio;
        }
        
    }

    goto inicio;

}