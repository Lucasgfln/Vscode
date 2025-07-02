#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int idade;

    printf(" * Informe sua idade: ");
    scanf("%i", &idade);


    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(idade < 0) {
        printf(" => Eleitor Inexistente!");

    } else if(idade < 16) {
        printf("  => Nao Eleitor!");

    } else if(idade >= 18 && idade <= 65) {
        printf(" => Eleitor Obrigatorio!");

    } else {
        printf(" => Eleitor Facultativo!");
        
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}