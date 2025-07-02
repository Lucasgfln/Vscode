#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num, verificador = 0, i;

    printf(" * Digite o numero desejado: ");
    scanf("%i", &num);    

    if(num <= 1) {
        printf(" => O numero nao eh valido!!");

        return 0;
    }

    for (i = 1; i < num; i++) {
        if(num%i == 0) {
            verificador = verificador + i;
        }
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(verificador == num) {
        printf(" => O numero *%i* eh um numero perfeito!!", num);
    } else {
        printf(" => O *%i* NAO eh um numero perfeito!!", num);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}