#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");

    printf("!!! Use '.' ao inves de ','. EX: 4,57 -> 4.57 !!!\n\n");
    //l = Largura, h = Altura, a = Área, qtdL = Quantidade de Latas.
    float l, h, a, qtdL;

    printf(" Por favor, digite a seguir a altura e a largura da parede, (em metros).");
    printf("\n Altura: ");
    scanf("%f", &h);

    printf("\n Largura: ");
    scanf("%f", &l);

    a = l * h;
    qtdL = ceil((0.3 * a)/2);

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" Voce precisara de %.0f Latas \n\n Extamente: %.1f l | %.0f ml", qtdL, (0.3 * a), (0.3 * a)*1000);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}