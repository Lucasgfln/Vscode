#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //v = valor, ja = João, js = José, m = Manoel.
    float v, ja, js, m;

    printf("======= Use '.' ao inves de ','. Nao use '.' para milhar EX: 1.518,68 -> 1518.68 =======\n\n");
    printf(" Digite o valor total da conta: ");
    scanf("%f", &v);

    ja = floor(v/3);
    js = floor(v/3);
    m = ((v/3)-floor(v/3))*2 + v/3;

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" O valor que cada um deve... \n\n *Joao: R$%.0f \n *Jose: R$%.0f \n *Manoel: R$%.2f", ja, js, m);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}