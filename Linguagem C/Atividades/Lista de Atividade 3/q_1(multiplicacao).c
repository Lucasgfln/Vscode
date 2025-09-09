#include <stdio.h>
#include <ctype.h>

int main (void){
    char c = 's';
    
    do{
        printf("\n\n<=================== I N I C I O ===================>\n\n");

        int num[2], i;

        printf(" * Informe dois numeros para uma multiplicacao. \n");

        for(i = 0; i < 2; i++){
            printf(" * %io Numero: ", i+1);
            scanf("%i", &num[i]);
        }

        int total = 0;

        for(i = 0; i < num[1]; i++){
            total += num[0];
        }

        printf("\n\n<================ R E S U L T A D O ================>\n\n");
        
        printf(" => A operacao %i x %i = %i\n\n", num[0], num[1], total);

        printf(" * Deseja continuar (sim ou nao)? ");
        scanf(" %c", &c);

        c = tolower(c);

    } while(c != 'n');

    printf("\n\n<==================== F I N A L ====================>\n==> Obrigado ate a proxima :)!!\n\n");
    return 0;
}