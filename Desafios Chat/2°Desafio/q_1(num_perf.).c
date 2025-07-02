#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num, verificador = 0;

    printf(" * Digite o numero desejado: ");
    scanf("%i", &num);    

    if(num <= 1) {
        printf(" => O numero nao eh valido!!");

        return 0;
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Os divisores de %i sao: ", num);

    for (int i = 0; i < num; i++) {
        if(i == 0) {
            continue;
        }
        if(num%i == 0) {
            verificador = verificador + i;

            printf("| %i |", i);
        }
    }

    if(verificador == num) {
        printf("\n\n => O numero *%i* eh um numero perfeito!!", num);
    } else {
        printf("\n\n => O *%i* NAO eh um numero perfeito!!", num);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}