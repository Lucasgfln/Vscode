#include <stdio.h>

int main(void){
    //nc = Número de Cavalos, f = Ferraduras, d = decisão, cmp = Cavalos com menos de quatro patas.
    int nc, cmp = 0, cmp2 = 0, cmp3 = 0, f, d = 2;

    printf("\n<=================== I N I C I O ===================>\n\n");

    printf(" Para podermos calcular quantas ferraduras seriam necessarias comprar para equipar todos os cavalos\n por favor digite quantos cavalos existem no seu haras: ");
    scanf("%i", &nc);

    printf("\n Existe algum cavalo com menos de quatro patas? \n Digite 1 para sim e 0 para nao: ");
    scanf("%i", &d);

    if(d != 1 && d != 0){
        while (d != 1 && d != 0){
            printf("\n Valor incorreto digite novamente (1 sim, 0 nao): ");
            scanf("%i", &d);
        }
    }


    if(d == 1){
        printf("\n Quantos cavalos com menos de quatro patas existem no seu hara? ");
        scanf("%i", &cmp);

        nc = nc - cmp;

        printf("\n Algum deles possui menos doque 3 patas (1 sim, 0 nao)? ");
        scanf("%i", &d);

        if(d != 1 && d != 0){
            while (d != 1 && d != 0){
                printf("\n Valor incorreto digite novamente (1 sim, 0 nao): ");
                scanf("%i", &d);
            }   
        }
        
        if(d == 1){
            printf("\n Quantos cavalos sao? ");
            scanf("%i", &cmp2);

            cmp = cmp - cmp2;

            printf("\n Algum deles possui menos doque 2 patas (1 sim, 0 nao)? ");
            scanf("%i", &d);

            if(d != 1 && d != 0){
                while (d != 1 && d != 0){
                    printf("\n Valor incorreto digite novamente (1 sim, 0 nao): ");
                    scanf("%i", &d);
                }   
            }

            if(d == 1){
                printf("\n Quantos cavalos sao? ");
                scanf("%i", &cmp3);

                cmp2 = cmp2 - cmp3;
            }
        }

    }

    f = (nc * 4) + (cmp * 3 ) + (cmp2 * 2) + cmp3;

    printf("\n No total sao *%i* ferraduras para o seu haras.", f);

    printf("\n\n<==================== F I N A L ====================>\n\n");

    return 0;
}