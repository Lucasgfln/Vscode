#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int n;

    printf(" * Quantas pessoas seram registradas? ");
    scanf("%i", &n);

    char nome[n][255];
    int idade[n], tam[n];

    for(int i = 0; i < n; i++) {
        tam[i] = i;
    }

    for(int i = 0; i < n; i++) {
        printf("\n * Nome: ");
        scanf(" %[^\n]", nome[i]);

        printf(" * Idade: ");
        scanf("%i", &idade[i]);
    }
 
    //Ordena os indices dentro de cada tamanho de vetor em ordem decrescente;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i ; j++) {
            if(idade[tam[j]] < idade[tam[j+1]]) {
                int temp = tam[j];
                tam[j] = tam[j+1];
                tam[j+1] = temp;
            }
        }
    }    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    for(int i = 0; i < n; i++) {
        printf("\n => %i anos | %s \n", idade[tam[i]], nome[tam[i]]);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}