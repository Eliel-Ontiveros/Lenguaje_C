//Eliel Alfonso Ontiveros Ojeda_368746
//Ingresar un año y determinar si es bisiesto o no

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    int year; //Declaramos las variables que utilizaremos

    printf("Ingrese un anio\n");
    scanf("%d", &year); //Escanea un numero ingresado por el usuario y la guarda en la variable year

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) //Condicional para comprobar si el año que ingreso el usuario es bisiesto
    {
        printf("El anio %d es Bisiesto", year);
    }

    else 
    {
        printf("El anio %d no es bisiesto", year); //Si no cumple con la condicion anterior, se asume por descarte que el año ingresado por el usuario no seria bisiesto
    }

    return 0; //Termina la funcion principal
    
}