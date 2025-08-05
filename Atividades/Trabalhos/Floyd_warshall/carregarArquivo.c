#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 100

void carregarArquivo();

int main() {
    FILE *arquivo;
}

void carregarArquivo() {
    FILE *arq;
    char caminhoArq[255];


    do{
        arq = fopen(caminhoArq, "r");
        if (arq != NULL) {
            printf("Arquivo aberto com sucesso.\n");


        } else {
            printf("Erro ao abrir o arquivo.\n");
            printf("Tente Novamente");
        }
    }   while(1);

    return 0;
}