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

    funcion();

    return 0;
}

/*
¿Que sucede con la variable al salir de la funcion?
Aunque la funcion se llama varias veces, el valor de contador se reinicia en cada llamada de la funcion 
no mantiene su valor entre las llamadas a la función. 
*/
