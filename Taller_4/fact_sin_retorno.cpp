/*
fact_sin_retorno
Eliel Alfonso Ontiveros Ojeda_368746
16-Sep-2023
Calcular el factorial de un número entero utilizando una función sin retorno
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

void calcularFactorial(int n) //Declaramos nuestra funcion para calcular el factorial de n y desarrollamos la funcion, en este caso es una funcion sin retorno

{
    double factorial = 1; //Declaramos la variable que utilizaremos 

    for(int i = 1; i <= n; ++i) //Ciclo en el cual calcularemos el factorial de n, en el cual se iran multiplicando n * n-1 hasta llegar a 1 
    {
        factorial *= i;
    }

    printf("El factorial de %d es = %.0f\n", n, factorial); //Imprime el valor del factorial de n
}

int main() //Iniciamos nuestra funcion principal
{
    int n; //Declaramos la variable donde guardaremos el valor al cual se le calculara su factorial
    int opcion; //Declaramos la variable donde guardaremos el valor de la opcion de repetir la funcion

    do
    {
    printf("\nIngresa un numero entero\n");
    scanf("%d", &n); //Escanea y guarda el numero ingresado por el usuario en la variable n

    calcularFactorial(n); //Ejecuta la funcion en la cual se calculo el factorial del numero ingresado por el usuario

    printf("\n1 - Calcular factorial de otro numero\n");
    printf("2 - Terminar programa\n");
    printf("Ingrese la opcion que desee\n");
    scanf(" %d", &opcion); //Escanea y guarda la opcion que eligio el usuario
    }
    while (opcion == 1); //Miestras opcion sea igual a 1 el programa volvera a ejecutarse
    
    printf("Finalizando programa\n"); //Si opcion es igual a 2 el programa finalizara y se imprimira que este acaba de finalizar

    return 0; //Termina nuestra funcion principal

}
