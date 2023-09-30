#include <stdio.h>

void funcion() 
{
    static int contador = 0;
    contador++;
    printf("El valor del contador es: %d\n", contador);
}

int main() 
{
    for(int i = 0; i < 10; i++) 
    {
        funcion();
    }
    return 0;
}
