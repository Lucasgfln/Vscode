#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c, x1, x2, delta;

    printf(" Equacao => ax^2 + bx + c = 0 \n");
    
    printf(" Por favor insira os  valores de \n a: ");
    scanf("%f", &a); 

    printf("\n b: ");
    scanf("%f", &b);

    printf("\n c: ");
    scanf("%f", &c);
    
    delta = pow(b , 2) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);


    printf("\n A seguir as raizes possiveis da equacao:");
    printf("\n x1: %.2f \n x2: %.2f\n", x1, x2);
    printf(" ");
    return 0;
}