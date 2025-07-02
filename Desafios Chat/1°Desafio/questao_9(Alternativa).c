#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //n = Nota de Dinheiro
    double dinheiro, centavos; 
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, resto;

    printf(" * Digite o valor: ");
    scanf("%lf", &dinheiro);

    centavos = dinheiro - floor(dinheiro);
    resto = dinheiro - centavos;

    if(resto%100 > 1) {
        n100 = resto / 100;
        resto = resto % 100;
    } if(resto % 50 > 1) {
        n50 = resto / 50;
        resto = resto % 50;
    } if(resto%20 > 1) {
        n20 = resto / 20;
        resto = resto % 20;
    } if(resto%10 > 1) {
        n10 = resto / 10;
        resto = resto % 10;
    }if(resto%5 > 1) {
        n5 = resto / 5;
        resto = resto % 5;
    } if(resto%2 > 1) {
        n2 = resto / 2;
        resto = resto % 2;
    } 
    n1 = resto;

    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");
    
    printf("%i | %i | %i | %i | %i | %i | %i", n100, n50, n20, n10, n5, n2, n1);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}