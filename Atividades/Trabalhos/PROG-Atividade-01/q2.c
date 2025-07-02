/*
Lucas Gabriel Felipe de Lima do Nascimento
TADS_2025.1
*/
#include <stdio.h>
#include <string.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int min[3], seg[3], cent[3], tam[3] = {0,1,2}, aux, tempo[3];
    char nome[3][255];
    
    printf("* Informe o Nome e o Tempo de Cada Participante...\n");

    for(int i = 0; i < 3; i++){
        
        printf("\n * Nome: ");
        scanf(" %[^\n]", nome[i]);

        printf(" * Minutos: ");
        scanf("%i", &min[i]);

        printf(" * Segundos: ");
        scanf("%i", &seg[i]);

        printf(" * Centesimos: ");
        scanf("%i", &cent[i]);

        tempo[i] = (((min[i]*60)+seg[i])*100)+cent[i];
    }

    if(tempo[tam[0]] > tempo[tam[1]]) {
        aux = tam[0];
        tam[0] = tam[1];
        tam[1] = aux;
    } if(tempo[tam[1]] > tempo[tam[2]]) {
        aux = tam[1];
        tam[1] = tam[2];
        tam[2] = aux;
    } if(tempo[tam[0]] > tempo[tam[1]]) {
        aux = tam[0];
        tam[0] = tam[1];
        tam[1] = aux;
    }
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    for(int i = 0; i < 3; i++){
        printf(" => %io %s: %02i:%02i.%02i\n", i+1, nome[tam[i]], min[tam[i]], seg[tam[i]], cent[tam[i]]);

        if(tempo[tam[i]]  < 87067){
            printf(" ==> %s Bateu o Recorde Mundial de 14:30.67 Do Norte Americano Bobby Finke!! Parabens!!!\n", nome[tam[i]]);
        }

        if(i < 2) {
            printf(" ========================= \n");
        }
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}