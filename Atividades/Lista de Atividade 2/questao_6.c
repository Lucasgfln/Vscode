#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float valor_p, lucro;

    printf(" * Informe o valor do produto: ");
    scanf("%f", &valor_p);
    
    if(valor_p >= 0 && valor_p < 20) {
        lucro = valor_p * 0.45;

    } else if(valor_p >= 20) {
        lucro = valor_p * 0.30;
        
    } else {
        printf(" !!! ERRO !!! Valor negativo.");
        
        return 0;
    }


    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => O Valor total de venda eh de R$%.2f. \n => Com um lucro de R$%.2f.", valor_p + lucro, lucro);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}