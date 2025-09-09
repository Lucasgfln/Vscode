#include <stdio.h>

int main(void) {
    int num1, num2;

    printf(" * Digite numero 1: ");
    scanf("%i", &num1);

    printf(" * Digite numero 2: ");
    scanf("%i", &num2);

    // mesma coisa de usar if e else;
    num1 >= num2 ? printf(" => num1 >= num2") : printf(" => num1 < num2");

    int resultado = num1 >= num2 ? num1 - num2 : num1 + num2;

    printf(" => Resultado: ", resultado);

    return 0;
}