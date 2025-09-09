#include <stdio.h>

int main(void){
    //slfx = salário fixo, slF = Salário Final, vnds = vendas, cms = comissão;
    float slfx, slF,vnds, cms;
    printf("\n\n<=================== I N I C I O ===================>\n\n");

    printf("======= Use '.' ao inves de ','. Nao use '.' para milhar EX: 1.518,68 -> 1518.68 =======\n\n");
    printf(" Digite seu salario fixo: ");
    scanf("%f", &slfx);

    printf("\n Agora digite o valor total de suas vendas: ");
    scanf("%f", &vnds);

    cms = (vnds * 0.05);
    slF = slfx + cms;

    printf("\n Sua comissao tem o valor de: R$%.2f\n Seu salario final e de: R$%.2f",cms, slF);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}