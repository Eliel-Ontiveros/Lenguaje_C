//Implementar una calculadora que pueda realizar operaciones de suma, resta,
//multiplicación y división. El usuario debe ingresar dos números y el operador.
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char op;
    int valido = 1;

    printf("Ingrese operacion: ");
    scanf("%c", &op);
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
        case 'x':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;

        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}