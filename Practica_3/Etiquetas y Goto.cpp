//Juego de adivinanza de numeros con Etiquetas y "Goto"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    inicio: //Etiqueta para el inicio del juego
    printf("Bienvenidos a este juego para adividar un numero aleatorio\n");

    adivinanza: //Etiqueta para el inicio de la adivinanza
    int control = 0; //Variable de control para el bucle while
    int intentos = 1; //Variable para contar los intentos del jugador
    int num_sel; //Variable para contar los intentos del jugador
    int num; //Variable para almacenar el número aleatorio generado por el programa
    int max = 100; //Límite superior para el número aleatorio
    int min = 0; //Límite inferior para el número aleatorio
    int cant = 1; //Cantidad de números aleatorios a generar
    int i; //Variable de iteración para el bucle for
    printf("Ingrese un numero entre el 1 y el 100\n");
    scanf("%d", &num_sel); //Lectura del número seleccionado por el jugador
    for (i = 0; i < cant; i++) // Bucle for para generar un número aleatorio
    {
        num = (rand() % (max - min + 1) + min); //Generación del número aleatorio
    }
    while (control == 0) //Bucle while que se ejecuta hasta que el jugador adivine el número
    {
        printf("\nIntento numero: %d\n", intentos); //Impresión del número de intentos
        printf("\nIngrese un numero entre el 1 y el 100\n");
        scanf("%d", &num_sel); //Lectura del número seleccionado por el jugador
        if (num_sel == num) //Si el número seleccionado por el jugador es igual al número aleatorio...
        {
            goto reinicio; //...el programa va a la etiqueta "reinicio"
        }
        else //Si el número seleccionado por el jugador no es igual al número aleatorio...
        {
            goto adivinanza; //...el programa va a la etiqueta "adivinanza"
        }

    }
    
    reinicio: //Etiqueta para el reinicio del juego
    int op; // Variable para almacenar la opción seleccionada por el jugador para jugar de nuevo o no
    printf("\nQuieres volver a jugar?\n");
    printf("1 - Si\n");
    printf("2 - No\n");
    scanf("%d", &op); //Lectura de la opción seleccionada por el jugador
    if (op == 1) //Si el jugador selecciona 1...
    {
        goto adivinanza; //...el programa va a la etiqueta "adivinanza"
    }
    else 
    {
        if (op == 2) //Si el jugador selecciona 2...
        {
            printf("Muchas gracias por jugar\n"); //...el programa agradece al jugador y termina

            return 0;
        }

        else //Si el jugador selecciona cualquier otro número...
        {
            goto reinicio; //...el programa va a la etiqueta "reinicio"
        }
        
    }

    goto inicio; // Final del programa, pero nunca se alcanza debido a las declaraciones de retorno y goto anteriores

}