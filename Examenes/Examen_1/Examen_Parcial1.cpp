/*
Eliel Alfonso Ontiveros Ojeda_368746
04/10/2023
Escribe un programa en C que encuentre y muestre todos los números perfectos en un rango dado por el usuario. 
Un número perfecto es un número entero positivo que es igual a la suma de sus divisores propios positivos (excluyendo a sí mismo).
Requisitos del programa:
+Solicita al usuario que ingrese un número entero positivo "n" que representa el rango.
+El programa buscará números perfectos en el rango de 1 a "n".  
+Valida que "n" sea un número entero positivo.
+Si encuentras un número perfecto, muestra ese número y sus divisores propios positivos.  
+Después de encontrar todos los números perfectos en el rango, pregunta al usuario si desea buscar números perfectos en otro rango. 
Si la respuesta es afirmativa, el programa debe repetirse; de lo contrario, debe finalizar.
*/

#include <stdio.h>
#include <stdlib.h>

int Numero_Perfecto(int numero);

int main() 
{
    int n, op;
    
    do {
        system ("CLS");
        inicio: printf("Ingrese un numero entero positivo\n");
        scanf("%d", &n);
        
        if (n <= 0) 
        {
            printf("El numero debe ser positivo\n");
            printf("Vuelva a intentarlo\n");
            goto inicio;
        }
        
        printf("Numeros perfectos en el rango de 1 a %d:\n", n);
        
        for (int i = 1; i <= n; i++) 
        {
            if (Numero_Perfecto(i)) 
            {
                printf("%d es un numero perfecto. Divisores: 1", i);
                for (int j = 2; j <= i / 2; j++) 
                {
                    if (i % j == 0) 
                    {
                        printf(", %d", j);
                    }
                }
                printf("\n");
            }
        }
        
        printf("\n---Menu---\n");
        printf("1 - Analizar otro numero\n");
        printf("0 - Salir del Programa\n");
        printf("Ingrese la opcion que desea realizar\n");
        scanf("%d", &op);
    } while (op == 1);

    printf("Finalizando el Programa\n");
    
    return 0;

}

int Numero_Perfecto(int numero) 
{
    int sumaDivisores = 1; 
    
    for (int i = 2; i <= numero / 2; i++) 
    {
        if (numero % i == 0) 
        {
            sumaDivisores += i;
        }
    }
    

    if (sumaDivisores == numero) 
    {
        return 1;
    } 

    else 
    {
        return 0; 
    }
}
