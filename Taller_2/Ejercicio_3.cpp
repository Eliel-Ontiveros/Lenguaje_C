//Usar #define para definir una constante simbólica llamada TASA_DESCUENTO con el valor 0.1.
//Calcular y mostrar el precio después de aplicar un descuento del 10% a un producto.
#include <stdio.h>
int main ()
{
    #define tasa_descuento 0.1;
    int precio_producto = 450;
    printf("El precio del producto es = %d", precio_producto);
    int descuento;
    int precio_final;
    descuento = precio_producto * tasa_descuento;
    printf("\nAl precio original se le descontara  %d", descuento);
    precio_final = precio_producto - descuento;
    printf("\nEl precio final con el descuento es = %d", precio_final);
    return 0;
}