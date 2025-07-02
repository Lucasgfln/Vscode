#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");

    printf("  !!! Use '.' ao inves de ','. EX: 4,57 -> 4.57 !!!\n\n");

    float s1, s2, s3;

    while (1){

        printf(" Por favor, digite a seguir os lados de um triangulo (em metros), que voce deseja saber a area e o perimetro... \n\n *Lado 1: ");
        scanf("%f", &s1);

        printf(" *Lado 2: ");
        scanf("%f", &s2); 
        
        printf(" *Lado 3: ");
        scanf("%f", &s3); 
    
        if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)){

            break;
        } else{
            printf("\n\n<=================== E R R O ! ! ===================>\n\n");
            printf(" [!!!] Os lados informados nao formam um triangulo valido. Tente novamente [!!!]\n\n");
            printf(" [!!] Lembre-se para um triangulo valido, (l1 + l2 > l3) e (l1 + l3 > l2) e (l2 + l3 > l1) [!!]\n\n");

        }

    }


    const float P = s1+s2+s3, SP = P/2, A = sqrt(SP*(SP-s1)*(SP-s2)*(SP-s3));
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf("A seguir a area e o perimetro do seu triangulo. \n\n =>Area: %.2f m2 \n =>Perimetro: %.2f m", A, P);

    printf("\n\n<==================== F I N A L ====================>\n\n\n");
    return 0;
}