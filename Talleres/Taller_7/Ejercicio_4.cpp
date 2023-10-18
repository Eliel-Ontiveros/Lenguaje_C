#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena);

int main()
{
    char cadena[] = "Ya me quiero ir a mi casa";

    printf("Cadena inicial: %s\n", cadena);

    invertirCadena(cadena);

    printf("Cadena modificada (Invertida): %s\n", cadena);

    return 0;
}

void invertirCadena(char *cadena)
{
    int longitud = strlen(cadena);

    for (int i = 0; i < longitud / 2; i++)
    {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temp;
    }
}
