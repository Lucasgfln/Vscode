#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n\n<=================== I N I C I O ===================>\n\n");
    //s = Sanduíche, q = Queijo, p = Presunto, h = Hambúrguer.
    float s, q, p, h;
    printf(" *Informe a quantidade de sanduiches a serem produzidas: ");
    scanf("%f", &s);

    //Tudo em Gramas
    q = 50*2*s;
    p = 50*s;
    h = 100*s;

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" Para um total de %.0f sanduiches, serao necessarios...\n", s);

    printf(" =>Queijo: %.1fKg | %.0fg\n", q/1000, q);
    printf(" =>Presunto: %.1fKg | %.0fg\n", p/1000, p);
    printf(" =>Carne: %.1fKg | %.0fg\n", h/1000, h);

    printf("\n\n<==================== F I N A L ====================>\n\n\n");
    return 0;
}