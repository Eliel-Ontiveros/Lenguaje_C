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

    int desplazado = num_decimal << 2; // Desplazamiento a la izquierda por 2 bits

    printf("Numero original: %d\n", num_decimal); //Imprime el numero que ingreso el usuario
    printf("Numero desplazado: %d\n", desplazado); //Imprime el numero una vez desplazado

    int num_bits_1 = 0; //Declaramos las variables que utilizaremos
    int temp = num_decimal; //Declaramos las variables que utilizaremos

    while(temp > 0) //Bucle para contar la cantidad de bits necesarios para representar el numero
    {
        temp /= 2;
        num_bits_1++;
    }

    int bit[num_bits_1]; //Declaramos las variables que utilizaremos
    int indice = 0; //Declaramos las variables que utilizaremos

    while (num_decimal > 0) //Bucle para crear el arreglo
    {
        bit[indice] = num_decimal %2;
        num_decimal /=2;
        indice++;
    }

    printf("Numero de Bits Original\n");

    for (int i = indice-1; i >= 0; i--) //Bucle que imprime el arreglo
    {
        printf("%d", bit[i]);
    }

     /*Calcular los bits necesarios para el número desplazado*/
     int num_bits_2 = 0; //Declaramos las variables que utilizaremos
     temp = desplazado;

     while(temp > 0) //Bucle que calcula los bits necesario para representar el numero una vez desplazado
     {
         temp /= 2;
         num_bits_2++;
     }

     int bit_desplazado[num_bits_2];
     indice = 0;

     while (desplazado > 0) //Bucle para crear el arreglo para el numero desplazado
     {
         bit_desplazado[indice] = desplazado %2;
         desplazado /=2;
         indice++;
     }

     printf("\nNumero de Bits Desplazado\n");

     for (int i = indice-1; i >= 0; i--) //Bucle que imprime el arreglo del numero una vez desplazado
     {
         printf("%d", bit_desplazado[i]);
     }

     return 0; //Termina la funcion principal

}
