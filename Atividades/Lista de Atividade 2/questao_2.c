#include <stdio.h>

int main (void){
    printf("\n\n\n\n<=================== I N I C I O ===================>\n\n");
    //l = lado, l1 = lado 1...
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
        printf(" => Voce tem um triangulo valido!!");

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

    printf("\n\n<==================== F I N A L ====================>\n\n\n\n");
    return 0;
}