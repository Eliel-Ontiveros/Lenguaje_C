/*
Apuntador_Hacia_Funcion
Eliel Alfonso Ontiveros Ojeda
17/Oct/2023
Escribe una función llamada multiplicarPorDos que tome un apuntador a un entero como argumento. 
Dentro de la función, multiplica el valor al que apunta el apuntador por 2. 
Luego, llama a esta función desde main() y muestra el valor modificado.
*/

#include <stdio.h>

int multiplicarPorDos(int *ptr);

int main()
{
    int num = 27;
    int *ptr = &num;

    multiplicarPorDos(ptr);

    printf("El resultado de la multiplicacion es = %d", *ptr);
}


/*Funcion la cual toma el valor al que esta apuntado un puntero y lo multiplica por 2*/
int multiplicarPorDos(int *ptr)
{
    *ptr *= 2;

    return *ptr;
}