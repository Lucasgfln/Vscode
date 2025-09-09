#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float n, e = 1;

    printf(" * Digite n: ");
    scanf("%f", &n);

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => E = ");
    for(float i = 1; i < n; i++) {
        e += 1/i; 
    }
    printf("%.2f", e);
    
    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}