/*
Lucas Gabriel Felipe de Lima do Nascimento
TADS_2025.1
*/
#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int idade;
    float peso;
    //Sei que não preciso dessa constante, mas quis usar para testar.
    const int mg_por_gotas = 25;

    printf(" * Informe sua idade: ");
    scanf("%i", &idade);
    
    printf(" * Informe Seu Peso: ");
    scanf("%f", &peso);


    printf("\n\n<================ R E S U L T A D O ================>\n\n");
    
    //500 mg por ml e que cada ml corresponde a 20 gotas, cada gota equivale 25mg.
    if( idade < 12) {
        if(peso < 5){
            printf(" => Nao existe dosagem segura para este peso.");
        } else if(peso <= 9) {
            printf(" => %i Gotas", 125/mg_por_gotas);
        } else if(peso < 16){
            printf(" => %i Gotas", 250/mg_por_gotas);
        } else if(peso <= 24) {
            printf(" => %i Gotas", 375/mg_por_gotas);
        } else if(peso < 30){
            printf(" => %i Gotas", 500/mg_por_gotas);
        } else{
            printf(" => %i Gotas", 750/mg_por_gotas);
        }
    } else {
        //Também quis testar ternário.
        peso < 60 ? printf(" => %i Gotas", 875/mg_por_gotas) : printf(" => %i Gotas", 1000/mg_por_gotas); 
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}