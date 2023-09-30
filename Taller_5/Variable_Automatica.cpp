#include <stdio.h>

void funcion() 
{
    int contador;
    for(contador = 0; contador < 10; contador++) 
    {
        printf("El valor del contador es: %d\n", contador);
    }
}

int main() 
{
    
    for(int i = 0; i < 10; i++) 
    {
        funcion();
    }
    return 0;
}
