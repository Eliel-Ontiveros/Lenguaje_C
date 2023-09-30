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

/*
¿Qué sucede con la variable al salir de la función?
A diferencia de una variable automática, una variable estática no se destruye al salir de la función. 
Su valor se mantiene para la próxima vez que se llama a la función.

¿Cómo difiere de una variable automática?
Una variable automática se crea y se destruye cada vez que se llama a la función;
por lo tanto, no mantiene su valor entre las llamadas a la función. En cambio, 
una variable estática mantiene su valor entre las llamadas a la función porque solo se inicializa una vez.
*/
