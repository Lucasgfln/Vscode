#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //r1 = 1real, r5 = 5reais, r10 = 10reais, r50 = 50reais, r100 = 100reais, vt = VAlor_Total.
    int r1, r5, r10, r50, r100, vt;

    printf(" Por favor informe a quantidade de notas de R$1, R$5, R$10, R$50, R$100. \n Moeda(s) de R$1: ");
    scanf("%i", &r1);

    printf(" Nota(s) de R$5: ");
    scanf("%i", &r5);

    printf(" Nota(s) de R$10: ");
    scanf("%i", &r10);

    printf(" Nota(s) de R$50: ");
    scanf("%i", &r50);

    printf(" Nota(s) de R$100: ");
    scanf("%i", &r100);

    vt = (r1+(r5*5)+(r10*10)+(r50*50)+(r100*100));

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" ==> O Valor total das notas e: R$%i,00", vt);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}
