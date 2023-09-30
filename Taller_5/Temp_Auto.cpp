#include <stdio.h>

void funcion() 
{
    register int temp = 0;  // Variable de registro
    int valor = 0;  // Variable automatica

    temp += 5;
    valor += 10;

    printf("El valor de temp es: %d\n", temp);
    printf("El valor de valor es: %d\n", valor);
}

int main() 
{
    funcion();
    return 0;
}
