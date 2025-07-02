#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num[10];

    printf(" * Iforme 10 numero inteiros a seguir...\n\n");

    for(int i = 0; i < 10; i++) {
        printf(" * %io Numero: ", i+1);
        scanf("%i", &num[i]);
    }    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    for(int i = 0; i < 10; i++) {
        if (num[i] % 3 == 0) {
            printf(" => %i eh multiplo de '3'. Pois %i x 3 = %i.\n\n", num[i], num[i]/3, num[i]);
        } else if(num[i] % 5 == 0) {
            printf(" => %i eh multiplo de '5'. Pois %i x 5 = %i.\n\n", num[i], num[i]/5, num[i]);
        }
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}