/*
Num_positivo_negativo_cero
Eliel Alfonso Ontiveros Ojeda_368746
05-Sep-2023
Programa que pueda determinar si un numero es positivo, negativo o cero
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    int num; //Declaramos las variables que utilizaremos

    printf("Ingrese un numero cualquiera\n");
    scanf("%d", &num); //Escanea un numero ingresado por el usuario y la guarda en la variable num

    if (num > 0) //Condicional para comprobar si numero del usuario es mayor a 0 significa que el numero ingresado es positivo
    {
        printf("%d es un numero positivo", num);
    }

    else if (num < 0) //Condicional para comprobar si el numero del usuario es menor a 0 significa que el numero ingresado es negativo
    {
        printf("%d es un numero negativo", num);
    }

    else if (num == 0) //Condicional para comprobar si el numero del usuario es 0 significa que el numero ingresado es 0 :)
    {
        printf("El numero es 0");
    }

    else
    {
        printf("Introdujo un dato invalido"); //Si no cumple con ninguna de las condiciones anteriores significa que introdujo un dato incorrecto
    }
    
    return 0; //Termina la funcion principal
    
}