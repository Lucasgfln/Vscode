#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int num = 0, fatorial_num = 1;

    printf(" * Digite o numero desejado: ");
    scanf("%i", &num);

    for (int i = 1; i <= num; i++) {
        fatorial_num = fatorial_num  * i;
    }
    
    printf("\n\n<================ R E S U L T A D O ================>\n\n");
    
    printf(" => %i! = %i", num, fatorial_num);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}