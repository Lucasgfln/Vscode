/*
Lucas Gabriel Felipe de Lima do Nascimento
TADS_2025.1
*/
#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //fx = f(x)/Função de 'X'.
    float x, fx;

    printf(" * Informe o valor de 'X': ");
    scanf("%f", &x);
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

        if(x<-4 || x>4) {
        fx = ((5*x)+3)/(sqrt(pow(x,2)-16));
        printf(" => O valor de f(x) eh: %.2f (Precisao de duas casas decimais)", fx);
    } else {
        printf(" => 'X' invalido!! Pois 'X' tem que ser maior que 4 ou menor que -4. Caso contrario, o valor da raiz sera invalido, pois nao existe raiz de 0 e nem de numero negativo.");
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}