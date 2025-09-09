#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    char string[2][255];

    printf(" * Informe uma palavra: ");
    scanf("%s", string[0]);
    
    printf(" * Informe um anagrama da palavra '%s': ", string[0]);
    scanf("%s", string[1]);

    printf("\n\n<================ R E S U L T A D O ================>\n\n");
    char chave;
    int i, j, k;
    
 
    if(strlen(string[0]) == strlen(string[1])) {
        int tam = strlen(string[0]);
        char orgnl[2][tam+1];

        //Cópia das palavras originais, para usar em um print futuro.
        strcpy(orgnl[0], string[0]);
        strcpy(orgnl[1], string[1]);

        //Deixar todas as letras em minúsculo.
        for(i = 0; i < 2; i++) {
            for(j = 0; j < tam; j++) {
                string[i][j] = tolower(string[i][j]);
            }
        }

        //Ordenar as letras em ordem crescente/alfabética usando Insertion Sort. Ex: casa = aacs.
        for(i = 0; i < 2; i++) {
            for(j = 1; j < tam; j++) {
                chave = string[i][j];
                k = j - 1;

                while (k >= 0 && string[i][k] > chave) {
                    string[i][k + 1] = string[i][k];
                    k--;
                }
                
                string[i][k + 1] = chave;
            }
        }

        //Compara se são iguais lexicalmente. Ex: Casa == Casa retorna 0;
        if (strcmp(string[0],string[1]) == 0) {
            printf(" => As palavras '%s' e '%s' sao Anagramas. :)", orgnl[0], orgnl[1]);
        } else {
            printf(" => As palavras '%s' e '%s' NAO sao Anagramas. :(", orgnl[0], orgnl[1]);
        }

        //Amazena as letras distintas em cada índice do vetor;
        char ltrs[tam];
        int qtd = 1;
        ltrs[0] = string[0][0];

        for(i = 1; i < tam; i++) {
            if(string[0][i] != string[0][i - 1]) {
                ltrs[qtd] = string[0][i];
                qtd++;
            }
        }

        //Conta a quantidade de que cada letra aparece na palavra;
        char qtd_ltrs[qtd];

        for(i = 0; i < qtd; i++) {
            qtd_ltrs[i] = 0;

            for(j = 0; j < tam; j++) {
                if(ltrs[i] == string[0][j]) {
                    qtd_ltrs[i]++;
                }
            }

            printf("\n => (%ix) %c", qtd_ltrs[i], ltrs[i]);
        }
    } else {
        printf(" !! => As Palavras '%s' e '%s' sao de tamanhos diferentes. !!", string[0], string[1]);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}