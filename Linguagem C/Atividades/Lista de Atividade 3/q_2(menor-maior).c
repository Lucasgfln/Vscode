#include <stdio.h>
#include <stdlib.h>

void ordenar(float *vetor, int tamanho){
    for (int i = 1; i < tamanho; i++) {
        float chave = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = chave;
    }
}

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n");
    printf("<======= Quando Desejar Finalizar Digite '0' =======>\n\n");

    float valor = 0;
    float *n = NULL;
    int tam = 0;

    while(1){
        printf(" * Informe o %io Numero: ", tam + 1);
        scanf("%f", &valor);
        if(valor == 0) break;

        float *temp = realloc(n, (tam + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao realocar memória!\n");
            free(n);  // libera a original, se for encerrar
            return 1;
        }

        n = temp;
        n[tam] = valor;
        tam++;
    }

    ordenar(n, tam);

    float media, soma = 0;

    for(int i = 0; i < tam; i++) {
        soma += n[i];
    }

    media = soma/(tam);
    
    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => A media dos numeros (|%.2f|,", n[0]);

    for (int i = 1; i < (tam - 1); i++) {
        printf(" |%.2f|,", n[i]);
    }

    printf(" |%.2f|) eh: %.2f\n", n[tam-1], media);
    printf(" => Sendo o maior e o menor respectivamente: %.2f e %.2f", n[tam-1], n[0]);
    
    free(n);
    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}