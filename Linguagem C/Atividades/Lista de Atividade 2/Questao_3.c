#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float l1, l2, l3;
    printf(" * Digite os lados do triangulo desejado... \n");

    printf("1o Lado: ");
    scanf("%f", &l1);
    
    printf("2o Lado: ");
    scanf("%f", &l2);

    printf("3o Lado: ");
    scanf("%f", &l3);
    
    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(l1<(l2+l3) && l2<(l1+l3) && l3<(l2+l1)) {
        if(l1 == l1 && l2 == l1 && l3 == l1 ) {
            printf(" => Seu triangulo e *equilatero*!! Pois tem todos os lado iguais.");
        } else if(l1 != l2 && l2 != l3 && l1 != l3) {
            printf(" => Seu triangulo e *escaleno*!! Pois tem todos os lados diferentes.");
        } else {
            printf(" => Seu triangulo e *isosceles*!! Pois tem dois lados iguais, e um diferente.");
        }

    } else if (l1>(l2+l3)) {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");
        printf(" => Seu triangulo nao e valido!! Pois %.2f >= %.2f + %.2f\n\n", l1, l2, l3);
        printf(" !! Dica: o valor de cada um dos lados deve ser menor do que a soma dos dois demais lados !!");

    } else if (l2>(l1+l3)) {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");
        printf(" => Seu triangulo nao e valido!! Pois %.2f >= %.2f + %.2f\n", l2, l1, l3);
        printf(" !! Dica: o valor de cada um dos lados deve ser menor do que a soma dos dois demais lados !!");

    } else {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");
        printf(" => Seu triangulo nao e valido!! Pois %.2f >= %.2f + %.2f\n", l3, l2, l1);
        printf(" !! Dica: o valor de cada um dos lados deve ser menor do que a soma dos dois demais lados !!");

    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}