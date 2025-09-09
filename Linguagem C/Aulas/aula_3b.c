#include <stdio.h>
#include <math.h>

int main(void){
    float x, y;

    printf(" Digite o valor de x para descobrir y: ");
    scanf("%f", &x);

    y = pow(x,2) + 2 * x - 5;

    printf(" Y = %.2f", y);


    return 0;
}
