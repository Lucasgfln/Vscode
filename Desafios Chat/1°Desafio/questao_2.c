#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float num1, num2, num3, temp;

    printf(" * Digite os numeros...\n");

    printf(" * 1o Numero: ");
    scanf("%f", &num1);
    
    printf(" * 2o Numero: ");
    scanf("%f", &num2);

    printf(" * 3o Numero: ");
    scanf("%f", &num3);

    if(num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    } if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    } if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
 
    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf("%.2f > %.2f > %.2f", num1, num2, num3);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}