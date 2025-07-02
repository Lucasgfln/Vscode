#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aumentar(int **n, int *tam, int valor) { //Utilizar o realloc varias vezes se precisar;
    int *temp = realloc(*n, (*tam + 1) * sizeof(int));
    if (temp == NULL) {
        printf("Erro ao realocar memória!\n");
        free(*n);  // libera a original, se for encerrar
        exit(1);
    }

    *n = temp;
    (*n)[*tam] = valor;
    (*tam)++;
}

float media(int **valor, int tam, float *med){
    for(int i = 0; i < tam; i++) {
        *med += (*valor)[i];
    }

    *med = *med/tam;
    return *med;
}

void printar(int tam, int **valor, const char *par_impar){
    printf(" => Numeros %s:", par_impar);
    for(int i = 0; i < tam; i++){
        printf(" |%i|", (*valor)[i]);
    }
    printf("\n");
}

#define TAM 20

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    srand(time(NULL));

    int *pares = NULL, *impares = NULL;
    int i, num, tam_par = 0, tam_impar = 0;
    float media_par = 0, media_impar = 0;

    for(i = 0; i < TAM; i++) {
        num = rand() % 101;

        if(num % 2 == 0) {
            aumentar(&pares, &tam_par, num);
        } else {
            aumentar(&impares, &tam_impar, num);
        }
    }
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printar(tam_par, &pares, "Pares");
    printf(" => Media dos Pares: %.2f\n", media(&pares, tam_par, &media_par));
    printar(tam_impar, &impares, "Impares");
    printf(" => Media dos Impares: %.2f\n", media(&impares, tam_impar, &media_impar));

    free(pares);
    free(impares);
    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}