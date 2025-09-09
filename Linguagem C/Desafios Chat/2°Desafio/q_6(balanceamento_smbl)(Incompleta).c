#include <stdio.h>
#include <string.h>

//Vou tentar criar uma função pela primeira vez;
//prtnc = Pertence, c = letra, cnjnt = conjunto, *cnjnt = a letra dentro do vetor;
int prtnc(char c, const char *cnjnt) {
    //enquanto conjunto tiver caracteres / cnjnt != \0(Final da string);
    while(*cnjnt) {
        if( c == *cnjnt) {
            return 1; //Retorna verdadeiro;
        }
        cnjnt++;
    }
    return 0; //Retorna falso;
}

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    char exprss[255]; //exprss = Expressão;

    printf(" * Escreva uma expressao matematica a seguir: ");
    scanf(" %[^\n]", exprss);

    //{ 12 * (1 + 2) / [2 * (3 + 4)]} Correta
    //{ 12 * (1 + 2] / [2 * (3 + 4))} errada
    //  |040|041|091|093|123|125|
    //   '(';')';'[';']';'{';'}'
    int tam = strlen(exprss), i, indc[tam], j = 0; //tam = tamanho, indc = índice; 
    char smbl[tam]; //smbl = símbolo;

    //Pega todos os símbolos dentro da expressão;
    for(i = 0; i < tam; i++) {
        if(prtnc(exprss[i], "{}[]()")){
            smbl[j] = exprss[i];

            indc[j] = i;
            j++;
        }
    }

    //{(][())};
    int verificador = 1;
    for(i = 0; i < j; i++) {
    }
        

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}