#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _RegistroAnimal
{
    char especie[50];
    char nombreAnimal[50];
    char enfermedad[50];
    int edad;
    int numeroRegistro;
} RegistroAnimal;

#define MAX_REGISTROS 1000

RegistroAnimal RegistrarAnimal(int esRegistroAleatorio, int numeroRegistro);
void VerHistorialMedico(RegistroAnimal registros[], int posicion);
void ConsultarRegistros(RegistroAnimal registros[], int posicion);
void AlmacenarDatos(RegistroAnimal registros[], int posicion);
int CargarDatos(RegistroAnimal registros[], int posicion);

void MostrarRegistro(RegistroAnimal registro);
int BusquedaLineal(RegistroAnimal registros[], int longitud, int numeroRegistro);
int GenerarNumeroAleatorio(int limiteInferior, int limiteSuperior);

int main()
{
    srand(time(NULL));
    int opcion;
    int posicion = 0;
    RegistroAnimal registrosAnimales[MAX_REGISTROS];
    posicion = CargarDatos(registrosAnimales, posicion);

    do
    {
        system("CLS");
        printf("1.- Registrar un nuevo animal\n");
        printf("2.- Ver historial medico\n");
        printf("3.- Consultar registros\n");
        printf("4.- Almacenar datos\n");
        printf("5.- Cargar datos\n");
        printf("0.- Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            registrosAnimales[posicion] = RegistrarAnimal(1, 239291);
            posicion++;
            break;
        case 2:
            VerHistorialMedico(registrosAnimales, posicion);
            break;
        case 3:
            ConsultarRegistros(registrosAnimales, posicion);
            break;
        case 4:
            AlmacenarDatos(registrosAnimales, posicion);
            break;
        case 5:
            posicion = CargarDatos(registrosAnimales, posicion);
            break;
        }
        system("PAUSE");
    } while (opcion != 0);

    return 0;
}

RegistroAnimal RegistrarAnimal(int esRegistroAleatorio, int numeroRegistro)
{
    RegistroAnimal tempRegistro;

    if (esRegistroAleatorio)
    {
        tempRegistro.numeroRegistro = GenerarNumeroAleatorio(30000, 39999);
    }
    else
    {
        tempRegistro.numeroRegistro = numeroRegistro;
    }

    printf("Ingrese la especie del animal: ");
    scanf(" %s", tempRegistro.especie);

    printf("Ingrese el nombre del animal: ");
    scanf(" %s", tempRegistro.nombreAnimal);

    printf("Ingrese la edad del animal: ");
    scanf("%d", &tempRegistro.edad);

    printf("Ingrese alguna enfermedad que tenga el animal: ");
    scanf(" %s", tempRegistro.enfermedad);

    MostrarRegistro(tempRegistro);
    return tempRegistro;
}

void VerHistorialMedico(RegistroAnimal registros[], int posicion)
{
    int numeroRegistro;
    int indice;

    do
    {
        printf("Ingrese el numero de registro del animal: ");
        scanf("%d", &numeroRegistro);
    } while ((indice = BusquedaLineal(registros, posicion, numeroRegistro)) == -1);

    MostrarRegistro(registros[indice]);

    printf("¿Desea actualizarlo? (1.- Si, 0.- No): ");
    scanf("%d", &numeroRegistro);

    if (numeroRegistro)
    {
        registros[indice] = RegistrarAnimal(0, registros[indice].numeroRegistro);
    }
}

void ConsultarRegistros(RegistroAnimal registros[], int posicion)
{
    int numeroRegistro;

    do
    {
        printf("Ingrese el numero de registro del animal a buscar: ");
        scanf("%d", &numeroRegistro);
    } while (BusquedaLineal(registros, posicion, numeroRegistro) == -1);

    int indice = BusquedaLineal(registros, posicion, numeroRegistro);
    MostrarRegistro(registros[indice]);
}

void AlmacenarDatos(RegistroAnimal registros[], int posicion)
{
    FILE *archivo;
    int i = 0;

    archivo = fopen("registros_animales.txt", "w");

    for (i = 0; i < posicion; i++)
    {
        fprintf(archivo, "%-10d %-10s %-10s %-10s %-10d\n", registros[i].numeroRegistro, registros[i].especie, registros[i].nombreAnimal, registros[i].enfermedad, registros[i].edad);
    }
    fclose(archivo);

    printf("Datos almacenados exitosamente.\n");
}

int CargarDatos(RegistroAnimal registros[], int posicion)
{
    FILE *archivo;
    int i;
    archivo = fopen("registros_animales.txt", "r");

    if (archivo)
    {
        do
        {
            fscanf(archivo, "%d %s %s %s %d", &registros[posicion].numeroRegistro, registros[posicion].especie, registros[posicion].nombreAnimal, registros[posicion].enfermedad, &registros[posicion].edad);
            posicion++;
        } while (!feof(archivo));
        fclose(archivo);

        printf("Datos cargados exitosamente.\n");
    }
    else
    {
        printf("El archivo no existe.\n");
    }

    return posicion;
}

void MostrarRegistro(RegistroAnimal registro)
{
    printf("Nombre del animal: %s\n", registro.nombreAnimal);
    printf("Especie: %s\n", registro.especie);
    printf("Edad: %d\n", registro.edad);
    printf("Enfermedad: %s\n", registro.enfermedad);
    printf("Numero de Registro: %d\n", registro.numeroRegistro);
}

int BusquedaLineal(RegistroAnimal registros[], int longitud, int numeroRegistro)
{
    int i;
    for (i = 0; i < longitud; i++)
    {
        if (registros[i].numeroRegistro == numeroRegistro)
        {
            return i;
        }
    }
    return -1;
}

int GenerarNumeroAleatorio(int limiteInferior, int limiteSuperior)
{
    int rango = (limiteSuperior - limiteInferior + 1);
    return rand() % rango + limiteInferior;
}
