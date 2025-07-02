#include <stdio.h>

int main(void){
    //qtdcp = Quantidade de camisas pequenas, qtdcm = Quantidade de camisas medias, qtdcg = Quantidade de camisas grandes
    int qtdcp, qtdcm, qtdcg;

    printf("\n => Digite a quantidade de camisas tamanho P: ");
    scanf("%i", &qtdcp);

    printf("\n => Digite a quantidade de camisas tamanho M: ");
    scanf("%i", &qtdcm);

    printf("\n => Digite a quantidade de camisas tamanho G: ");
    scanf("%i", &qtdcg);


    printf(" *Valor das camisas P: R$%i,00\n *Valor das camisas M: R$%i,00\n *Valor das camisas G: R$%i,00\n => Valor total foi de: R$%i,00", qtdcp*15, qtdcm*20, qtdcg*25, (qtdcp*15)+(qtdcm*20)+(qtdcg*25));

    return 0;
}