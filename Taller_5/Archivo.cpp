#include <stdio.h>

extern void modificarSaldoOtroArchivo();  // Declaracion de la funcion externa

int saldo = 1000;  // Declaracion de la variable externa

void modificarSaldo() 
{
    saldo += 500;
    printf("El saldo en Archivo.cpp despues de modificar es: %d\n", saldo);
}

int main() 
{
    printf("El saldo inicial en Archivo.cpp es: %d\n", saldo);
    modificarSaldo();
    modificarSaldoOtroArchivo();
    return 0;
}

/*
¿Cómo afecta la visibilidad y el tiempo de vida de la variable externa?
La variable saldo se declara en Otro_Archivo.c y se modifica tanto en Otro_Archivo.cpp como en Archivo.cpp; 
como saldo es una variable externa, mantiene su valor entre las modificaciones en ambos archivos. 
Esto es porque saldo es visible a lo largo de todo el programa y su tiempo de vida es a lo largo de toda la ejecución del programa.
*/
