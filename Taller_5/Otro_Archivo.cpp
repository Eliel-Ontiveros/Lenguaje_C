#include <stdio.h>

extern int saldo;  // Acceso a la variable externa

void modificarSaldoOtroArchivo() 
{
    saldo += 200;
    printf("El saldo en Otro_Archivo.cpp despues de modificar es: %d\n", saldo);
}
