#include <stdio.h>
#include <stdlib.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    char **nome; 
    int tam = 0;

    printf(" * Quantas pessoas serao registradas? ");
    scanf("%d", &tam);

    nome = malloc(tam * sizeof(char)); // Defiine **nome como nome["tam"][];

    for(int i = 0; i < tam; i++) {
        nome[i] = malloc(255 * sizeof(char)); // Define nome["tam"][] como nome["tam"][255]; 
    }

    for(int i = 0; i < tam; i++) {
        printf(" * %da Pessoa: ", i + 1);
        scanf(" %[^\n]", nome[i]);
    }

    for(int i = 0; i < tam; i++) {
        printf(" => Nome da %da Pessoa: %s\n", i + 1, nome[i]);
    }

    for (int i = 0; i < tam; i++) {
        free(nome[i]);
    }
    free(nome);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}