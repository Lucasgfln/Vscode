#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float n, s, i, j, fatorial = 1;

    printf(" * Digite 'N': ");
    scanf("%f", &n);
    
    for(i = 0; i <= 10; i++){
        for(j = 1; j < i; j++) {
            fatorial *= j;
        }
        if(i == 0) {
            s = n;

            continue;
        } else if ((int) i % 2 == 0) {
            s += n/fatorial;
            
        } else {
            s -= n/fatorial;
        }
        fatorial = 1;
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => S = %.2f", s);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}