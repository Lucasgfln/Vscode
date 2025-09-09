#include <stdio.h>
#include <stdlib.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int n;

    printf(" * Digite 'N': ");
    scanf("%d", &n);

    if(n < 0) {
        printf("\n  !!! Valor Invalido !!!");
        printf("\n\n<==================== F I N A L ====================>\n\n");
        return 1; 
    }

    int *cnjt_F; 
    cnjt_F = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        if(i < 2) {
            cnjt_F[i] = i;
            continue;
        }

        cnjt_F[i] = cnjt_F[i-1] + cnjt_F[i-2];
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Esses sao os %i primeiros numero da serie de Fibonacci = {", n);
    for(int i = 0; i < n - 1; i++) {
        printf(" %i,", cnjt_F[i]);
    }
    printf(" %i}", cnjt_F[n-1]);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}