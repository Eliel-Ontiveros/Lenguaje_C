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
