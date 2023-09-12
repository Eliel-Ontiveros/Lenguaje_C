//Implementar una calculadora de áreas que te permita determinar el área de un
//triángulo, circulo, rectángulo, cubo y cilindro.
 #include <stdio.h>
 #define pi 3.141592
 
 int main()
 {
    int base;
    int altura;
    int radio;
    int area;
    int op;

    printf("ingrese si quiere calcular el area de un triangulo, ciculo, rectangulo, cubo o cilindro\n");
    printf("\nIngrese un 1 para calcular area de un triangulo");
    printf("\nIngrese un 2 para calcular area de un circulo");
    printf("\nIngrese un 3 para calcular area de un rectangulo");
    printf("\nIngrese un 4 para calcular area de un cubo");
    printf("\nIngrese un 5 para calcular area de un cilindro\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("\nIngrese el valor de la altura");
        scanf("%d", &altura);
        printf("\nIngrese el valor de la base");
        scanf("%d", &base);
        area = (base * altura)/2;
        printf("\nEl area del triangulo es = %d", area);
        break;

    case 2:
        printf("\nIngrese el valor del radio del circulo");
        scanf("%d", &radio);
        area = pi * (radio*radio);
        printf("\nEl area del circulo es = %d", area);
        break;
    
    case 3:
        printf("\nIngrese el valor de la base");
        scanf("%d", &base);
        printf("\nIngrese el valor de la altura");
        scanf("%d", &altura);
        area = base * altura;
        printf("\nEl area del rectangulo es = %d", area);
        break;

    case 4:
        printf("\nIngrese la base de una cara");
        scanf("%d", &base);
        printf("\nIngrese la altura de una cara");
        scanf("%d", &altura);
        area = (base * altura) * 6;
        printf("\nEl area total del cubo es = %d", area);
        break;

    case 5:
        printf("\nIngrese el valor del radio");
        scanf("%d", &radio);
        printf("\nIngrese el valor de la altura");
        scanf("%d", &altura);
        area = (2 * pi) * (radio * altura) + (2 * pi) * (radio * radio);
        printf("\nEl area del cilindro es = %d", area);
        break;

    default:
        printf("\nOpcion no valida");
        break;
    }
     
 }
