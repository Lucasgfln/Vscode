#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num, verificador = 0, i;

    printf(" * Digite o numero desejado: ");
    scanf("%i", &num);
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if (num <= 1){
        printf(" => Seu numero nao eh primo!!");

        return 0;
    } else {
        for (i = 2; i < num; i++) {
            if(num%i == 0) {
                verificador = 1;

                break;
            } 
        }
    }

    if(verificador == 0) {
        printf(" => *%i* eh primo", num);
    } else {
        printf(" => *%i* nao eh primo", num);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}