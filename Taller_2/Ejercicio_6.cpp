#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 


void numerosAletorios(int min, int max, int cant) 
{ 
    int i; 
    for (i = 0; i < cant; i++) { 
        int num = (rand() % 
           (max - min + 1)) + min; 
        printf("%d ", num); 
    } 
} 


int main() 
{ 
    int min = 1, max = 100, cant = 2; 

    numerosAletorios(min, max, cant); 

    return 0; 
} 