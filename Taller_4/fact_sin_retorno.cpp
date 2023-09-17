/*
fact_sin_retorno
Eliel Alfonso Ontiveros Ojeda_368746
16-Sep-2023
Calcular el factorial de un número entero utilizando una función sin retorno
*/

#include <stdio.h>

void calcularFactorial(int n) 

{
    double factorial = 1;
    for(int i = 1; i <= n; ++i) 
    {
        factorial *= i;
    }
    printf("El factorial de %d es = %.0f\n", n, factorial);
}

int main() 
{
    int num;

        printf("Ingresa un numero entero no negativo: ");
        scanf("%d", &num);

        if(num < 0) 
        {
            printf("Numero invalido. Por favor, ingresa un numero no negativo.\n");
        }

        calcularFactorial(num);

    return 0;

}
