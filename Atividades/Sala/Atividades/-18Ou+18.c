#include <stdio.h>

int main(void) {
    int i;
    
    printf(" *Digite sua idade: ");
    scanf("%i", &i);

    if(i>=18) {
        printf(" => Voce eh maior de idade!! Cuidado com os Boletos :<");
    } else {
        printf("  => Voce eh menor de idade!! Ainda faltam '%i' Anos Apenas Aproveite :)", 18-i);
    }



    return 0;
}