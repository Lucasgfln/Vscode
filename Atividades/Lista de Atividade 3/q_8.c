#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float n, s = 0, i, j, fatorial = 1;

    printf(" * Digite 'N'(N < 11): ");
    scanf("%f", &n);

    if(n <= 10 && n > 0) {       
        for(i = 0; i <= 10; i++){
            fatorial = 1;

            for(j = 1; j <= i; j++) {
                fatorial *= j;
            }

            if ((int) i % 2 == 0) {
                s += n/fatorial;
                
            } else {
                s -= n/fatorial;
            }
        }
    } else{
        printf("\n\n<=================== E R R O ! ! Lembre-se, N tem que ser maior que 0 e menor que 10 ===================>\n\n");
        return 1;
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => S = %.2f", s);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}