#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    srand(time(NULL));

    int vtr[N];
    int n_inseridos = 0, num;
    int existe_num = 0;

    do{
        num = rand() % 21;
        existe_num = 0;

        for(int i = 0; i < N; i++) {
            if(num == vtr[i]) {
                existe_num = 1;
                break;
            }
        }

        if(!existe_num) {
            vtr[n_inseridos] = num;
            n_inseridos++;
        }

    } while (n_inseridos < N);

    printf(" => Conjunto sem repeticao = {");
    for(int i = 0; i < N; i++) {
        printf("%i,", vtr[i]);
    }
    printf("}.");

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}