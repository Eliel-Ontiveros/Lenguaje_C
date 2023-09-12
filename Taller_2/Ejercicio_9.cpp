//Definir una funcion llamada esPrimo() que tome un numero entero como argumento y devuelva 1 si es primo y 0 si no lo es.
//Usar esta funcion para encontrar los primeros 5 numeros primos.
#include<stdio.h>
#include<math.h>
int esPrimo(int a);

int main()
{
  int num, i, x = 0;
  printf("Ingrese un numero entero positivo \n");
  scanf("%d", &num);
  for(i=1; i<=4;)
   {
    if (esPrimo(num))
     {
      if(num <= x)
      {
        printf("ingresa el siguiente numero primo \n");
      }
      else
      {
        printf("Es primo \n");
        i++;
        x = num;
      }
     }
     else
     {
      printf("No es primo \n");
     }
     scanf("%d", &num);

   }
  return 0;
}

int esPrimo(int num)
{
  int y;
  if (num == 0 || num == 1) return 0;
  if (num == 4) return 0;
  for (y = 2; y < num / 2; y++)
  {
    if (num % y == 0) return 0;
  }
  return 1;
} 