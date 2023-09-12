/*
Decimal_Binario
Eliel_Alfonso_Ontiveros_Ontiveros_368746
08-Sep-2023
Crear un programa que permita a los usuarios ingresar un número entero, especificar
el número de bits que se deben considerar y luego analizar el número en términos de
bits encendidos, posiciones y representación binaria.
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    int membresia; //Declaramos las variables que utilizaremos
    float descuento, monto_compra, monto_total; //Declaramos las variables que utilizaremos

    /*Solicitar al usuario si cuenta con membresía*/
    printf("¿El cliente cuenta con membresia?\n");
    printf("1 - Cuenta con una Membresia Premium\n");
    printf("2 - No cuenta con una Membresia\n");
    scanf("%d", &membresia); //Escanea un numero ingresado por el usuario y la guarda en la variable membresia
    printf("Ingrese el monto de la compra\n");
    scanf("%f", &monto_compra); //Escanea un numero ingresado por el usuario y la guarda en la variable monto_compra

    descuento = (membresia == 1) ? 0.15 : 0.1; /* Calcular el descuento basado en la membresía, Si el cliente tiene membresía premium, el descuento es del 15%
                                                  Si no tiene membresía, el descuento es del 10%*/
    monto_total = (monto_compra >= 1000) ? monto_compra - (monto_compra * descuento) : monto_compra; /*Calcular el monto total a pagar. Si la compra es mayor o igual a 1000, se aplica el descuento
                                                                                                       Si no, se paga el monto completo de la compra*/

    printf("El cliente debe pagar: $%.2f\n", monto_total); //Imprime la cantidad que debe pagar el cliente

    return 0; //Termina la funcion principal
}
