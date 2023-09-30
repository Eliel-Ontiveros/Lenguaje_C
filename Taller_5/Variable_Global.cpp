#include <stdio.h>

double pi = 3.14159;  // Variable global

void funcion() 
{
    double pi = 3.14;  // Variable local
    printf("El valor de pi dentro de la funcion es: %f\n", pi);
}

int main() 
{
    printf("El valor de pi fuera de la funcion es: %f\n", pi);
    funcion();
    return 0;
}

/*
Intenta acceder a ambas variables desde diferentes partes del programa. ¿Cual es el resultado?
En este codigo, la variable pi dentro de la funcion es una variable local y tiene precedencia sobre la variable global pi. 
Por lo tanto, dentro de la funcion, el valor de pi sera 3.14. Fuera de la funcion, el valor de pi sera 3.14159.

Explica el concepto de ámbito y visibilidad.
El "Ambito" se refiere a la región del código donde una variable es visible y accesible. Determina la accesibilidad de las variables, 
objetos, funciones y métodos en alguna parte particular del código durante el tiempo de ejecución.
La "Visibilidad" se refiere a la propiedad de una variable, función, clase, interfaz, etc., de ser visible o accesible desde un determinado lugar en el código. 
Controla si estas entidades pueden ser utilizadas o no en otras partes de tu código.
*/