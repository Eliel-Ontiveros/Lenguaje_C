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
