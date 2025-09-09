//Não vou considrar as letras 'K', 'W' e 'Y';
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//tentando criar uma função. Que mostre se em uma string está faltando um caracter;
void falta(char *ltrs, const char *cnjnt) {
    int qtd = strlen(cnjnt);

    for(int i = 0; i < qtd; i++) {
        int verificador = 0;
        char *aux = ltrs; //auxiliar para sempre 'zerar' o aux na função while, para percorrer todas as letras de ltrs;

        while (*aux) {
            if(cnjnt[i] == *aux) {
                verificador = 1;
                break;
            }
            
            aux++;
        }

        if(verificador == 0) {
            printf(" => Faltou a letra '%c'!\n", cnjnt[i]);
        }
    }
}

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    char frase[255], chave;
    int i, k = 0;

    printf(" * Informe um frase que possua todas as letras do alfabeto, pelo menos uma vez (Desconsidere 'K', 'W' e 'Y'): ");
    scanf(" %[^\n]", frase);

    int tam = strlen(frase);
    char orgnl[tam + 1];
    strcpy(orgnl, frase);

    for(i = 0; i < tam; i++) {
        frase[i] = tolower(frase[i]);
    }

    //Ordenar as letras em ordem crescente/alfabética usando Insertion Sort. Ex: casa = aacs.
    for(i = 1; i < tam; i++) {
        chave = frase[i];
        k = i - 1;

        while (k >= 0 && frase[k] > chave) {
            frase[k + 1] = frase[k];
            k--;
        } 
        frase[k + 1] = chave;
    }

    //Verifica quais letras da frase pertencem ao alfabeto, e os armazena em um índice, e sua respectiva quantidade;
    int qtd[tam], j = 0;
    char ltrs[26];

    for(i = 0; i < tam; i++) {
        qtd[i] = 0;
    }

    for(i = 0; i < tam; i++) {
        if(isalpha(frase[i])){
            if(j == 0 || frase[i] != ltrs[j-1]){
                ltrs[j] = frase[i];

                qtd[j] = 1;
                j++;
            } else {
                qtd[j]++;
            }
        }
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(j >= 23) {
        printf(" => Sua frase eh um pangrama.\n");

        printf(" => Pois possui:\n");

        for(i = 0; i < j - 1; i++){
            printf(" (%ix) %c |", qtd[i], ltrs[i]);
        }
        
        printf(" (%ix) %c.", qtd[j-1], ltrs[j-1]);

    } else {
        printf(" => Sua frase NAO eh um pangrama.\n");

        printf(" => Pois possui:\n");

        for(i = 0; i < j - 1; i++){
            printf(" (%ix) %c |", qtd[i], ltrs[i]);
        }
        
        printf(" (%ix) %c.\n\n", qtd[j-1], ltrs[j-1]);

        falta(ltrs, "abcdefghijlmnopqrstuvxz");
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}