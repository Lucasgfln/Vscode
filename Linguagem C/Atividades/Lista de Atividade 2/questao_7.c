#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float altura, peso;
    char s;

    printf(" * Digite seu sexo (M/F Masculino/Feminino): ");
    scanf("%c", &s);

    printf(" * Digite sua altura (em cm): ");
    scanf("%f", &altura);

    if(s == 'M' || s == 'm') {
        peso = (72.2 * (altura/100)) - 58; 

    } else if(s == 'F' || s == 'f') {
        peso = (62.1 * (altura/100)) - 44.7; 

    } else {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");

        printf(" Caractere diferente de 'M' ou 'F'!!");
        
        return 1;

    }
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Seu peso ideal e de %.2fKg.", peso);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}