/*
Par_PositivoS
Eliel Alfonso Ontiveros Ojeda_368746
05-Sep-2023
Programa que pueda determinar si un numero es par y negativo al mismo tiempo
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    int num, resto; //Declaramos las variables que utilizaremos

    printf("Ingrese un numero cualquiera\n");
    scanf("%d", &num); //Escanea un numero ingresado por el usuario y la guarda en la variable num
    resto = num % 2; //Operacion necesaria para conocer si un numero es par o impar

    if (num > 0 && resto == 0) //Condicional para comprobar si el numero del usuario es mayor a 0 y si el resto es igual a 0 significa que tambien es par
    {
        printf("El numero %d es par y positivo", num);
    }

    else if (num > 0 && resto != 0) //Condicional para comprobar si el numero del usuario es mayor a 0 y si el resto es diferente a 0 significa que tambien es impar
    {
        printf("El numero %d es impar y positivo", num);
    }

    else if (num < 0 && resto == 0) //Condicional para comprobar si el numero del usuario es menor a 0 y si el resto es igual a 0 significa que tambien es par
    {
        printf("El numero %d es par y negativo", num);
    }
    
    else if (num < 0 && resto != 0) //Condicional para comprobar si el numero del usuario es menor a 0 y si el resto es diferente a 0 significa que tambien es impar
    {
        printf("El numero %d es impar y negativo", num);
    }
    
    else if (num == 0) //Condicional para comprobar si el numero del usuario es igual, en cuyo caso no sera posible categorizarlo
    {
        printf("El numero es %d, no es posible categorizarlo", num);
    }

    else 
    {
        printf("Opcion Invalida"); //Si no cumple con ninguna de las condiciones anteriores significa que introdujo un dato incorrecto
    }
    
    return 0; //Termina la funcion principal
}