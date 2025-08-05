#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 100

void criarMatrizDeAdjacencia(int, int, int[][]);

int main() {
    FILE *arquivo;
    char linha[MAXCHAR];
    int n_cidades = 0;

    arquivo = fopen("cidades.txt", "r");
    if (arquivo != NULL) {
        printf("Arquivo aberto com sucesso.\n");


    } else {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fclose(arquivo);
    return 0;
}

void criarMatrizDeAdjacencia(int linhas, int colunas, float matriz[linhas][colunas]) {
    
}