#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int idade;

    printf(" * Informe sua idade: ");
    scanf("%i", &idade);
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(idade >= 0 && idade < 18) {
        printf("  => Voce eh menor de idade!! Ainda faltam '%i' Anos para a maioridade, Apenas Aproveite :>", 18-idade);

    } else if(idade >= 65) {
        printf(" => Voce tem mais de 65 anos!! Aproveite sua Aposentadoria :>");

    } else if(idade >= 18 && idade < 65) {
        printf(" => Voce eh maior de idade!! Cuidado com os Boletos :<");

    } else {
        printf(" => Ou voce nao existe ou digitou errado!!!");
        
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}