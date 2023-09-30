//Equipo 4
//Integrantes: Alejandro Velazquez, Eliel Ontiveros, Andrea Rivas , Teresa Rivas, ivan hernandez y Emanuel solis orozco 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int op, comp;
    srand(time(NULL));
    printf("Selecciona una opcion: ");
    printf("\n1)piedra");
    printf("\n2)papel");
    printf("\n3)tijera\n");
    scanf("%d",&op);
    comp=rand()%3;
    printf("comp dice: %d\n",comp);
    if((op == 1 && comp == 3) || (op == 2 && comp == 1))
        {
            printf("Ganaste");
        }
    if(op == 3 && comp == 2)
        {
            printf("Ganaste");
        }
    if((op == 1 && comp == 2) || (op == 2 && comp == 3))
        {
            printf("Perdiste");
        }
    if((op == 3 && comp == 1) || op == comp)
        {
            if(op == comp)
                {
                    printf("Empate");
                }
            else 
                {
                    printf("Perdiste"); 
                }
        }
    return 0;
}
