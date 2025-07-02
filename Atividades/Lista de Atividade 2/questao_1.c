#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float num1, num2;
    printf(" *Por favor digite os numeros que deseja comparar...\n");

    printf(" *1o Numero: ");
    scanf("%f", &num1);
    printf(" *2o Numero: ");
    scanf("%f", &num2);    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(num1!=num2) {
        printf(" =>Os numeros '%.2f' e '%.2f', sao diferentes.", num1, num2);

    } else {
        printf(" =>Os numeros '%.2f' e '%.2f', sao iguais.", num1, num2);

    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}