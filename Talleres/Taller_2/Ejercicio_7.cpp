//Pedir al usuario que ingrese un numero. 
//Calcular el factorial del numero utilizando una funcion recursiva.
#include <stdio.h>
int main()
{
    int num;
    int cond;
    int fact = 1;
    printf("Ingrese un numero cualquiera\n");
    scanf("%d", &num);
    for (cond = num; cond > 1; cond--) {
        fact = fact * cond;
    }
    printf("El factorial del numero %d es = %d", num, fact);

    return 0;
}