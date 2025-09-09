#include <stdio.h>
#include <math.h>

int main(void) {
    int num;

    printf("\n\n *Digite um Numero: ");
    scanf("%i", &num);

    if (num%2 == 0) {
        printf(" O Numero %i eh Par!\n\n", num);
    } else {
        printf(" O O Numero %i eh Impar!\n\n", num);
    }


    return 0;
}