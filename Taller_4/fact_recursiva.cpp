/*
fact_recursiva
Eliel Alfonso Ontiveros Ojeda_368746
16-Sep-2023
Calcular el factorial de un número entero utilizando una función recursiva
*/

#include <stdio.h>

int calcularFactorial(int n) 
{
    if(n == 0) 
    {
        return 1;
    }
    return n * calcularFactorial(n - 1);
}

int main() 
{
    int n;

        printf("Ingresa un numero entero no negativo: ");
        scanf("%d", &n);
        if(n < 0) 
        {
            printf("Numero invalido. Por favor, ingresa un numero no negativo.\n");
        }
        printf("El factorial de %d es  = %d", n, calcularFactorial(n));

    return 0;

}
