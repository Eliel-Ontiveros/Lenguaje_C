//Pedir al usuario que ingrese un número entero positivo n. 
//Imprimir los primeros n números primos.
#include <stdio.h>
int main()
{
    int num;
    int i;
    printf("Ingrese el numero inicial\n");
    scanf("%d", &num);
    for (i = 2, i < num; i++;)
{
        int aumento;
        aumento = 2;
        int num_primo = 1;
        while (num_primo == 1 && aumento < i)
        {
            if (i % aumento == 0)
            {
                num_primo == 0;
            }

            else
            {
                aumento++;
            }
            
        }

        if (num_primo == 1)
        {
            printf("\nEs un numero primo", i);
        }
        
    }

    return 0;
}