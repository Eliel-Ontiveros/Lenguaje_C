/*
Celsius_Fahrenheit
Eliel Alfonso Ontiveros Ojeda_368746
05-Sep-2023
Programa que pueda convertir de Grados Celsius a Grados Fahrenheit
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    float g_cel, g_fahr; //Declaramos las variables que utilizaremos

    printf("Ingrese los Grados Celsius\n");
    scanf("%f", &g_cel); //Escanea un numero ingresado por el usuario y la guarda en la variable g_cel
    g_fahr = (g_cel * 1.8) + 32; //Realiza la operacion pertinente para convertir de Grados Celsius a Grados Fahrenheit
    printf("La conversion de %.2f Grados Celsius a Grados Fahrenheit se mostrara a continuacion\n", g_cel);
    printf("%.2f Grados Fahrenheit", g_fahr); //Imprime el resultado de la operacion de conversion

    return 0; //Termina la funcion principal

}