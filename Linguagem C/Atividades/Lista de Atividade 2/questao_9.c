#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float a, b, c, delta, x1, x2;
    printf(" * Digite o valor de a, b, c....\n");

    printf(" * Valor de 'a': ");
    scanf("%f", &a);

    if (a == 0) {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");
        printf(" => Nao eh equacao de segundo grau!! pois 'a' = 0");

    } else {
        printf(" * Valor de 'b': ");
        scanf("%f", &b);
        
        printf(" * Valor de 'c': ");
        scanf("%f", &c);

        delta = pow(b , 2) - (4 * a * c);

        if(delta < 0) {
            printf("\n\n<=================== E R R O ! ! ===================>\n\n");
            printf(" => Nao ha raizes reais!! Pois delta tem valor negativo '%.2f'", delta);

        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("\n\n<================ R E S U L T A D O ================>\n\n");

            printf("\n A seguir as raizes possiveis da equacao:");
            printf("\n x1: %.2f \n x2: %.2f\n", x1, x2);

        }
    }
    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}