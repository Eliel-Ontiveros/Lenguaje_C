#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar un número aleatorio
int generarNumero() 
{
    return rand() % 100 + 1;
}

int main() 
{
    system ("CLS");
    // Inicializar el generador de numeros aleatorios
    srand(time(0));

    // Inicializar el numero ganador solo una vez
    static int numeroGanador = generarNumero();

    // Obtener un numero aleatorio para el jugador
    int numeroJugador = generarNumero();

    printf("Tu numero de loteria es: %d\n", numeroJugador);

    // Comparar el numero del jugador con el numero ganador
    if (numeroJugador == numeroGanador) {
        printf("¡Felicidades, ganaste la loteria!\n");
    } else {
        printf("Lo siento, no ganaste esta vez.\n");
    }

    return 0;
}

