/*
Descuentos_Membresia
Eliel Alfonso Ontiveros Ojeda_368746
08-Sep-2023
Programa que calcula si se le debe aplicar descuento a un cliente dependiendo de la cantidad de compra y si cuenta con una membresia
*/
#include <stdio.h>

int main()
{
    int membresia;
    float descuento, monto_compra, monto_total;

    printf("¿El cliente cuenta con membresia?\n");
    printf("1 - Cuenta con una Membresia Premium\n");
    printf("2 - No cuenta con una Membresia\n");
    scanf("%d", &membresia);
    printf("Ingrese el monto de la compra\n");
    scanf("%f", &monto_compra);

    descuento = (membresia == 1) ? 0.15 : 0.1;
    monto_total = (monto_compra >= 1000) ? monto_compra - (monto_compra * descuento) : monto_compra;

    printf("El cliente debe pagar: $%.2f\n", monto_total);

    return 0;
}
