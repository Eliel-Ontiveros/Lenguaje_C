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

/*
Compara el acceso y el tiempo de vida de estas variables
Tanto las variables de registro como las automaticas tienen un tiempo de vida que esta limitado al bloque de codigo, 
funcion o archivo de origen en el que se declaran. Ambas son accesibles solo dentro de su ambito de declaracion.

¿Por que usarias una variable de registro en lugar de una variable automatica?
Las variables de registro se utilizan para optimizar el acceso a las variables que se utilizan con frecuencia, 
almacenandolas en los registros de la CPU para un acceso mas rapido. Sin embargo, esta es solo una sugerencia y el compilador puede optar por ignorarla. 
Por otro lado, las variables automaticas son variables locales a una funcion sin ninguna sugerencia de optimizacion.
*/