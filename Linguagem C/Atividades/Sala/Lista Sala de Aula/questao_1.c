#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //num = Número.
    float num1, num2;

    printf(" * Digite dois numero...\n");

    printf(" * Numero 1: ");
    scanf("%f", &num1);
    
    printf(" * Numero 2: ");
    scanf("%f", &num2);


    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(num1 < num2) {
        printf(" => O quadrado de *%.2f* eh: *%.2f*!!\n", num1, pow(num1,2));

        if((sqrt(num2) * sqrt(num2)) == num2) {
            printf(" => A raiz de *%.2f* eh: *%.2f*", num2, sqrt(num2));
    
        } else {
            printf(" => Raiz nao exata");
        }

    } else {
        printf(" => O quadrado de *%.2f* eh de *%.2f*!!\n", num2, pow(num2,2));

        if((sqrt(num1) * sqrt(num1)) == num1) {
            printf(" => A raiz de *%.2f* eh: *%.2f*", num1, sqrt(num1));
    
        } else {
            printf(" => Raiz nao exata");
        }

    }



    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}