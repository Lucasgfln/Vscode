#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float t = 0;
    float n;

    printf(" * Digite 'N': ");
    scanf("%f", &n);

    for(float i = 0; i < n; i++) {
        //printf(" => T = %.2f/%.2f\n", i+1, n-i);
        t += (i+1)/(n-i);
    }

    printf("\n<================ R E S U L T A D O ================>\n\n");

    printf(" => T = %.2f", t);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}