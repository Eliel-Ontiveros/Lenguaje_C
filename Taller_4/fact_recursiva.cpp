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
        return 1;
    }
    return n * calcularFactorial(n - 1);
}

int main() 
{
    int n, opcion;

    do
    {
        printf("\nIngresa un numero entero\n");
        scanf("%d", &n);

        printf("El factorial de %d es  = %d\n", n, calcularFactorial(n));

        printf("\n1 - Calcular factorial de otro numero\n");
        printf("2 - Terminar programa\n");
        printf("Ingrese la opcion que desee\n");
        scanf(" %d", &opcion);
    }
    while (opcion == 1);

    printf("\nFinalizando programa");

    return 0;

}
