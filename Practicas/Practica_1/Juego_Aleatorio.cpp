#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 
{ 
    int control = 0;
    int intentos = 1;
    int num_sel;
    int num;
    int max = 100;
    int min = 0;
    int cant = 1;
    int i;
    printf("Ingrese un numero entre el 1 y el 100\n");
    scanf("%d", &num_sel);
    for (i = 0; i < cant; i++)
    {
        num = (rand() % (max - min + 1) + min);
    }
    while (control == 0)
    {
        printf("\nIntento numero: %d\n", intentos);
        printf("\nIngrese un numero entre el 1 y el 100\n");
        scanf("%d", &num_sel);
        if (num_sel == num)
        {
            printf("\nFelicidades, adivinaste el numero\n");
            printf("El numero de intentos fueron: %d\n", intentos);
            printf("Fin del Juego");
            control = 1;
        }
        else if (num_sel > num)
        {
            printf("\nDemasiado Alto\n");
            printf("Vuelva a intentarlo");
            intentos += 1;
        }
        else if (num_sel < num)
        {
            printf("\nDemasiado Bajo\n");
            printf("Vuelva a intentarlo");
            intentos +=1;
        }
    }

    return 0; 
} 