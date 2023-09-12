/*
Decimal_Binario
Eliel_Alfonso_Ontiveros_Ontiveros_368746
02-Sep-2023
Crear un programa que permita a los usuarios ingresar un número entero, especificar
el número de bits que se deben considerar y luego analizar el número en términos de
bits encendidos, posiciones y representación binaria.
*/

#include <stdio.h>

int main()
{
    int num_decimal;

    printf("Ingresa un numero decimal\n");
    scanf("%d", &num_decimal);

    //Validar que el numero sea positivo
    if(num_decimal < 0)
    {
        return 1;
    }

    //Calcular los bits necesarios
    int num_bits = 0;
    int temp = num_decimal;

    while(temp > 0)
    {
        temp /= 2;
        num_bits++;
    }

    //Creamos el arreglo
    int bit[num_bits];
    int indice;

    while (num_decimal > 0)
    {
        bit[indice] = num_decimal %2;
        num_decimal /=2;
        indice++;
    }

    //Imprimir el arreglo
    printf("Numero de Bits\n");

    for (int i = indice-1; i >= 0; i--)
    {
        printf("%d", bit[i]);
    }

    printf("\n");

    //Buscar la cantidad de Bits encendidos
    int bit_on;

    printf("Los Bits encendidos estan en la posicion\n");

    for(int i = 0; i < indice; i++)
    {
        if (bit[i] == 1)
        {
            bit_on = i;
            printf("%d", bit_on+1);
            
        }
        
    }

    if (bit_on == -1)
    {
        printf("No se encontraro ningun Bit encendido");
    }
    

    return 0;

}