#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCJ1 10
#define NCJ2 20

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int cnjt1[NCJ1], cnjt2[NCJ2], i, d;
    do{

        srand(time(NULL));// Inicializando semente de acordo com o Horário;

        printf(" => Conjunto 1 = {");
        for(i = 0; i < NCJ1; i++) {
            cnjt1[i] = rand() % 21;
            printf("%i,", cnjt1[i]);
        }
        printf("}.\n");

        printf(" => Conjunto 2 = {");
        for(i = 0; i < NCJ2; i++) {
            cnjt2[i] = rand() % 21;
            printf("%i,", cnjt2[i]);
        }
        printf("}.");


        printf("\n\n<================ R E S U L T A D O ================>\n\n");

        for(i = 0; i < NCJ1; i++) {
            for(int j = 0; j < NCJ2; j++){
                if(cnjt1[i] == cnjt2[j]) {
                    printf(" => Comun: %i\n", cnjt1[i]);
                    break;
                }
            }
        }

        printf(" => Continuar? ");
        scanf("%d", &d);
        printf("\n\n");
    } while (d!=0);
    

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}