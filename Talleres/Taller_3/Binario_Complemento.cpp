/*
Decimal_Binario
Eliel_Alfonso_Ontiveros_Ontiveros_368746
08-Sep-2023
Programa que permita a los usuarios ingresar un número entero, especificar
el número de bits que se deben considerar y luego analizar el número en términos de
bits encendidos, posiciones y representación binaria.
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    int num_decimal; //Declaramos las variables que utilizaremos

    printf("Ingresa un numero decimal\n");
    scanf("%d", &num_decimal); //Escanea un numero ingresado por el usuario y la guarda en la variable num_decimal

    if(num_decimal < 0) //Condicional que valida que el numero sea positivo, si no lo es el programa se reinicia
    {
        return 1;
    }

    int num_bits = 0; //Declaramos las variables que utilizaremos
    int temp = num_decimal; //Declaramos las variables que utilizaremos

    while(temp > 0) //Bucle para contar la cantidad de bits necesarios para representar el numero
    {
        temp /= 2;
        num_bits++;
    }

    int bit[num_bits]; //Declaramos las variables que utilizaremos
    int indice; //Declaramos las variables que utilizaremos

    while (num_decimal > 0) //Bucle para crear el arreglo
    {
        bit[indice] = num_decimal %2;
        num_decimal /=2;
        indice++;
    }

     printf("Numero de Bits\n");

    for (int i = indice-1; i >= 0; i--) //Bucle que imprime el arreglo
    {
        printf("%d", bit[i]);
    }

    printf("\n");

     for(int i = 0; i < indice; i++) //Bucle que calcula el complemento del numero binario
     {
         bit[i] = ~bit[i] & 1; // Usamos & 1 para asegurarnos de que el resultado sea un número binario válido (0 o 1)
     }

     printf("Complemento del número binario: ");

     for(int i = indice - 1; i >= 0; i--) //Bucle que imprime el arreglo del complemento
     {
         printf("%d", bit[i]);
     }

    return 0; //Termina la funcion principal

}