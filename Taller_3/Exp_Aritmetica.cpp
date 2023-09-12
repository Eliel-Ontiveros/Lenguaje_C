/*
Exp_Aritmetica
Eliel Alfonso Ontiveros Ojeda_368746
05-Sep-2023
Programa que pueda resolver la expresion aritmetica: (a * b + c) / (b - a) con valores fijos
*/

#include <stdio.h> //Agregamos las librerias que utilizaremos

int main() //Iniciamos nuestra funcion principal
{
    /*Declaramos las variables que utilizaremos*/
    int a = 5, b = 3, c = 7; 
    float resul;

    printf("Se resolvera la expresion aritmetica:\n");
    printf("(a * b + c) / (b - a)\n"); //Imprime la expresion aritmetica que se necesitara resolver
    printf("El valor de a es %d\n", a); //Imprime el valor de a
    printf("El valor de b es %d\n", b); //Imprime el valor de b
    printf("El valor de c es %d\n", c); //Imprime el valor de c
    resul = ((a * b) + c) / (b - a); //Resulve la ecuacion necesaria para conocer el resultado de la operacion aritmetica
    printf("El resultado es = %.2f", resul); //Imprime el resultado de la operacion aritmetica

    return 0; //Termina la funcion principal
}