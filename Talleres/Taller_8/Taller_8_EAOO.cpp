/*
Eliel Alfonso Ontiveros Ojeda_368746
05/11/2023 - 08/11/2023
Practica 7 - Busqueda Lineal en Matrices
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define FILAS 100
#define COLUMNAS 15

void llenarMatriz(int **matriz, int filas, int columnas);
void imprimirMatriz(int **matriz, int filas, int columnas);
void buscarEnMatriz(int **matriz, int filas, int columnas, int num);

int main() {
    srand(time(NULL));
    clock_t start, end;
    double tiempoMetodo1 = 0, tiempoMetodo2 = 0, tiempoMetodo3 = 0, tiempoMetodo4 = 0, tiempoMetodo5 = 0;

    int num, iteraciones, i, j;
    int *matrizPunteros[FILAS];
    int **matrizDoblePuntero = matrizPunteros;

    for (i = 0; i < FILAS; i++) {
        matrizPunteros[i] = (int *)malloc(COLUMNAS * sizeof(int));
        if (matrizPunteros[i] == NULL) {
            printf("Error de asignacion de memoria.\n");
            exit(1);
        }
    }

    llenarMatriz(matrizDoblePuntero, FILAS, COLUMNAS);

    printf("Ingrese la cantidad de veces que desea iterar las busquedas: ");
    scanf("%d", &iteraciones);

    int numerosABuscar[iteraciones];

    for (i = 0; i < iteraciones; i++) {
        numerosABuscar[i] = rand() % 1000;
    }

    for (j = 0; j < iteraciones; j++) {
        num = numerosABuscar[j];

        printf("Iteracion %d\n", j + 1);

        printf("Metodo 1\n");
        start = clock();
        imprimirMatriz(matrizPunteros, FILAS, COLUMNAS);
        buscarEnMatriz(matrizPunteros, FILAS, COLUMNAS, num);
        end = clock();
        tiempoMetodo1 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Metodo 2\n");
        start = clock();
        imprimirMatriz(matrizPunteros, FILAS, COLUMNAS);
        buscarEnMatriz(matrizPunteros, FILAS, COLUMNAS, num);
        end = clock();
        tiempoMetodo2 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Metodo 3\n");
        start = clock();
        imprimirMatriz(matrizPunteros, FILAS, COLUMNAS);
        buscarEnMatriz(matrizPunteros, FILAS, COLUMNAS, num);
        end = clock();
        tiempoMetodo3 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Metodo 4\n");
        start = clock();
        imprimirMatriz(matrizPunteros, FILAS, COLUMNAS);
        buscarEnMatriz(matrizPunteros, FILAS, COLUMNAS, num);
        end = clock();
        tiempoMetodo4 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Metodo 5\n");
        start = clock();
        imprimirMatriz(matrizPunteros, FILAS, COLUMNAS);
        buscarEnMatriz(matrizPunteros, FILAS, COLUMNAS, num);
        end = clock();
        tiempoMetodo5 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("\n");
    }

    printf("Tiempo total Metodo 1: %f segundos\n", tiempoMetodo1);
    printf("Tiempo total Metodo 2: %f segundos\n", tiempoMetodo2);
    printf("Tiempo total Metodo 3: %f segundos\n", tiempoMetodo3);
    printf("Tiempo total Metodo 4: %f segundos\n", tiempoMetodo4);
    printf("Tiempo total Metodo 5: %f segundos\n", tiempoMetodo5);

    for (i = 0; i < FILAS; i++) {
        free(matrizPunteros[i]);
    }

    return 0;
}

void llenarMatriz(int **matriz, int filas, int columnas) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 1000;
        }
    }
}

void imprimirMatriz(int **matriz, int filas, int columnas) {
    int i, j;
    printf("La matriz es:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void buscarEnMatriz(int **matriz, int filas, int columnas, int num) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (matriz[i][j] == num) {
                printf("Numero %d encontrado en posicion [%d][%d]\n", num, i, j);
                return;
            }
        }
    }
    printf("Numero %d no encontrado\n", num);
}
