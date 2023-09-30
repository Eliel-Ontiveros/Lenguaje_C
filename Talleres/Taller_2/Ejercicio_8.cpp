#include <stdio.h>
int main()
{
    float cal [10];
    float prom = 0;
    int x;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese la calificacion %d\n", i +1);
        scanf("%f", &cal[i]);
        prom += cal[i];
        printf("\n");
    }
    for (int y = 0; y < 10; y++)
    {
        for (y = 0, x = 1; x <= 10; y++, x++)
            if(cal[y] > cal[x])
            {
                int temp = cal[x];
                cal[x] = cal[y];
                cal[y] = temp;
            }
            
    }
        for (int i = 0; i <= 10, i++;)
    {
        printf("%d ", cal[i]);
    }
    printf("El promedio de las calificaciones es = %.2f\n", prom / 10);

    return 0;
}