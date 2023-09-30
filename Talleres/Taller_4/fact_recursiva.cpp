/*
fact_recursiva
Eliel Alfonso Ontiveros Ojeda_368746
16-Sep-2023
Calcular el factorial de un número entero utilizando una función recursiva
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int calcularFactorial(int n) //Declaramos nuestra funcion para calcular el factorial de n y desarrollamos la funcion, en este caso sera una funcion recursiva
{
    if(n == 0) //Condicional en la cual se verifica que n llegue hasta 0, para de esta forma deterner a la funcion en ese punto
    {
        return 1; //Termina el calculo de el factorial de n
    }
    return n * calcularFactorial(n - 1); //Regresa el valor de n * n-1, volviendo a llamar a la funcion para que se repita el proceso hasta que n sea igual a 0
}

int main() //Iniciamos nuestra funcion principal
{
    int n; //Declaramos la variable donde guardaremos el valor al cual se le calculara su factorial
    int opcion; //Declaramos la variable donde guardaremos el valor de la opcion de repetir la funcion

    do
    {
        printf("\nIngresa un numero entero\n");
        scanf("%d", &n); //Escanea y guarda el numero ingresado por el usuario en la variable n

        printf("El factorial de %d es  = %d\n", n, calcularFactorial(n)); //Imprime el valor que regreso de la funcion para calcular el factorial de n

        printf("\n1 - Calcular factorial de otro numero\n");
        printf("2 - Terminar programa\n");
        printf("Ingrese la opcion que desee\n");
        scanf(" %d", &opcion); //Escanea y guarda la opcion que eligio el usuario
    }
    while (opcion == 1); //Miestras opcion sea igual a 1 el programa volvera a ejecutarse

    printf("\nFinalizando programa"); //Si opcion es igual a 2 el programa finalizara y se imprimira que este acaba de finalizar

    return 0; //Termina nuestra funcion principal

}
