#include <stdio.h>

int main(void){
    int x, y, soma;

    printf(" Insira o valo de x: ");
    scanf("%i",&x);

    printf("\n Insira o valo de y: ");
    scanf("%i",&y);

    soma = x+y;
    printf("\n A soma de X e Y: %i",soma);
    return 0;
}