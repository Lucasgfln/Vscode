#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num, i;

    printf(" * Digite o numero desejado: ");
    scanf("%i", &num);
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    for (i = 1; i <= 10; i++) {
        printf(" => %i * %i = %i\n",num, i, num*i);
    }  

    printf("\n<==================== F I N A L ====================>\n");
    return 0;
}