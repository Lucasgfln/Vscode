#include <stdio.h>
#include <string.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    char frase[1000];

    printf(" * Digite a frase desejada: ");
    scanf(" %[^\n]", frase);
    
    int tam = strlen(frase), qtd_plvr = 1;

    //Contará a quantidade de palavras;
    for(int i = 0; i <= tam; i++) {
        if(frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\0'){
            qtd_plvr++;
        }
    }


    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => A sua frase possui '%i' palavras. Sendo elas: \n\n", qtd_plvr);

    //Fará quase a mesma coisa da anterior mas agora printando quais são as palavras;
    printf(" => ");
    for(int i = 0; i <= tam; i++) {
        if(frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\0'){
            printf("\n => ");
        } else{
            printf("%c", frase[i]);
        }  
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}