/*
Gestio_Inventario
Eliel Alfonso Ontiveros Ojeda_368746
03-Sep-2023
Sistema basico de gestion de inventario
*/

#include <stdio.h>
#define capacidad_max 100

int main()
{
    int inventario[capacidad_max] = {0};
    int elementos_inv = 0;
    int op;

    while (1)
    {
        printf("\n--Sistema de Gestion de Inventario--\n");
        printf("Ingrese el numero de la opcion deseada\n");
        printf("1 - Agregar un elemento al inventario\n");
        printf("2 - Retirar un elemento del inventario\n");
        printf("3 - Mostrar inventario\n");
        printf("4 - Salir\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
           if (elementos_inv < capacidad_max)
           {
                inventario[elementos_inv]++;
                elementos_inv++;
                printf("\nAcabas de ingresar un elemento al inventario\n");
           }
           else
           {
                printf("\nEl inventario esta lleno\n");
           }
            break;

        case 2:
            if (elementos_inv > 0)
            {
                inventario[elementos_inv]--;
                elementos_inv--;
                printf("\nAcaba de retirar un elemento del inventario\n");
            }
            else
            {
                printf("El inventario esta vacio\n");
                printf("No es posible retirar mas elementos\n");
            }
            break;

        case 3:
            printf("\nInventario\n");
            for (int i = 0; i < elementos_inv; i++)
            {
                printf("Elemento %d: %d\n", i + 1, inventario[i]);
            }
            break;

        case 4:
            printf("\nSaliendo del Sistema de Gestion");
            return 0;
            
        default:
            printf("Opcion invalida\n");
            break;
        }
    }
    
    return 0;

}