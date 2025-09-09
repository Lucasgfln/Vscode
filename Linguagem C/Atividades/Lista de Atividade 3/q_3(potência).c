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
    

    int *cnjt_S; 
    cnjt_S = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        cnjt_S[i] = (i+1)*(i+1);
    }

    printf("\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Conjunto S = {");
    for(int i = 0; i < n-1; i++){
        printf(" %i,", cnjt_S[i]);
    }
    printf(" %i}", cnjt_S[n - 1]);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}