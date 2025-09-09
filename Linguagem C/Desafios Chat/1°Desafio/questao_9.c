#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //n = Nota de Dinheiro
    double dinheiro, centavos; 
    int n[6] = {100, 50, 20, 10, 2, 1}, c[4] = {50, 25, 10, 5}, resto;
    

    printf(" * Digite o valor: ");
    scanf("%lf", &dinheiro);

    centavos = dinheiro - floor(dinheiro);
    resto = dinheiro - centavos;
    centavos = centavos * 100; 

    printf("\n\n<================ R E S U L T A D O ================>\n\n");
    
    printf(" *NOTAS*\n\n");

    for (size_t i = 0; i < 6; i++) {
        int nota = n[i];
        int qtd = resto / nota;
        if (qtd > 0) {
            printf(" => Notas de %i = %i\n", nota, qtd);
            resto = resto % nota;
        }
    }
    if(centavos > 0) {
        printf("\n *CENTAVOS*\n\n");
        for (size_t i = 0; i < 4; i++) {
            int moeda = c[i];
            int qtd = centavos / moeda;
            if (qtd > 0) {
                printf(" => Moedas de %i = %i\n", moeda, qtd);
                centavos = (int)centavos % moeda;
            }
        } 
    } 
    printf("\n => Total: R$%.2lf\n\n", dinheiro);

    printf("<==================== F I N A L ====================>\n\n");
    return 0;
}