/*
Apuntadores_Basicos
Eliel Alfonso Ontiveros Ojeda
17/Oct/2023
Dado un entero x, crea un apuntador ptr que apunte a x.
Luego, imprime el valor de x y el valor al que apunta ptr.
*/

#include <stdio.h>

int main()
{
    int x = 27;
    int *ptr = &x;

    printf("El valor de x = %d\n", x);

    printf("El valor de ptr = %d\n", *ptr);

    return 0;
}
