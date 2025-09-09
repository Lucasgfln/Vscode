#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //s = Salário; dscnt = Desconto
    float s, dscnt;

    printf("======= Use '.' ao inves de ','. Nao use '.' para milhar EX: 1.518,68 -> 1518.68 =======\n\n");

    printf(" Digite seu salario: ");

    scanf("%f", &s);

    
    if(s <= 600) {
        printf(" => Isento de Desconto INSS");

        return 0;
    } else if(s <= 1200) {
        dscnt = 20;
        
    } else if(s <= 2000) {
        dscnt = 25;

    } else {
        dscnt = 30;
    }
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => %.0f Porcento de desconto INSS.", dscnt);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}