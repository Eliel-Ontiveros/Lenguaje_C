//Calcular y mostrar el resultado de la expresion (x+2*y)/(3*x-y)
#include <stdio.h>
int main()
{
    int x = 4;
    int y = 8;
    int resultado;
    resultado = (x+2*y)/(3*x-y);
    printf("El resultado del calculo es = %d", resultado);
    return 0;
}