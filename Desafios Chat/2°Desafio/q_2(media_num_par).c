#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int soma = 0, num = 0, f = 0, qtd = 0, num_par[1000];
    
    printf(" * Digite uma seqencia de numeros positivos a seguir, quando quiser finalizar digitar um numero negativo.\n\n");

    while (num >= 0) {
        printf(" * %io Numero: ", qtd + 1);
        scanf("%i", &num);

        if(num%2 == 0) {
            num_par[f] = num;

            soma += num;
            f++;
        }
        qtd++;
    }

    float media = soma/f;

    printf("\n\n<================ R E S U L T A D O ================>\n\n");
    printf(" => A media dos numeros pares (");

    for(int i = 0; i < f-1; i++) {
        printf("%i,", num_par[i]);
    }

    printf("%i) eh: %.2f", num_par[f-1], media);
    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}