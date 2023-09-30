/*
Calificacion_Numerica_Letra
Eliel Alfonso Ontiveros Ojeda_368746
03-Sep-2023
Programa que tome una calificacion y la convierta en una calificacion en letra

*/

#include <stdio.h>

int main() 
{
    int calificacion_numerica;
    printf("Ingrese la calificacion numerica entre 0 y 100\n");
    scanf("%d", &calificacion_numerica);

    char calificacion_letra = (calificacion_numerica >= 90) ? 'A' :
                               (calificacion_numerica >= 80) ? 'B' :
                               (calificacion_numerica >= 70) ? 'C' :
                               (calificacion_numerica >= 60) ? 'D' : 'f';

    printf("Calificacion numerica: %d\n", calificacion_numerica);
    printf("Calificacion en letra: %c\n", calificacion_letra);

    return 0;
}

