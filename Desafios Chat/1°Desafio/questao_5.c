#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num[10], i = 0, impares = 0, pares = 0, positivos = 0, negativos = 0;

    for(i = 0; i < 10; i++) {
        printf(" * Digite o %io numero: ", i);
        scanf("%i", &num[i]);
    } 

    for(i = 0; i < 10; i++) {
        
        if(num[i]%2 == 0) {
            pares += 1;
        } else {
            impares = impares + 1;
        }
        if(num[i] >= 0) {
            positivos += 1;
        } else {
            negativos += 1;
        }
    }
    
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Entre os numeros [%i", num[1]);

    for(i = 2; i <= 10; i++) {
        printf(", %i", num[i]);
    }

    printf("]\n => Existem...\n => %i PARES\n => %i IMPARES \n => %i POSITIVOS \n => %i NEGATIVOS", pares, impares, positivos, negativos);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}