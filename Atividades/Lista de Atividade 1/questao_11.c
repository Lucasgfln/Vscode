#include <stdio.h>
#include <math.h>


int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n");
    printf("             [!!!] SOMENTE NUMEROS [!!!]\n\n\n");
    /* cg/ca/cga = Custo do Combustível | Gasolina | Álcool | Aditivada ,v = Velocidade Média km/h, t = Período de Tempo,
       rg = Rendimento Gasolina, ra = Rendimento Álcool, pg = Preço Gasolina, pa = Preço Álcool, pga = Aditivada */
    float cg, ca, cga, v, t, rg, pg = 6.39, pa = 4.69, pga = 6.43;
    
    printf(" *Digite qual o tempo da viagem (em minutos): ");
    scanf("%f", &t);

    printf(" *Digite a velocidade em media pretendida durante a viagem (media padrao 80-120km/h): ");
    scanf("%f", &v);

    printf(" *Digite o rendimento (km/L) do seu carro na gasolina: ");
    scanf("%f", &rg);

    t = t/60;

    cg = ((v*t)/rg)*pg;

    ca = ((v*t)/(rg*0.7))*pa;

    cga = ((v*t)/(rg*1.02))*pga;

    t = t*60;

    printf("\n\n<================ R E S U L T A D O ================>\n\n\n");

    printf(" Em uma viagem de %.0fmin / %02ih:%02im, o custo do combustivel seria...\n", t, (int)t/60, (int)t % 60);

    printf(" => Custo total da Gasolina Aditivada (preco/L R$%.2f): R$%.2f\n", pga, cga);

    printf(" => Custo total da Gasolina (preco/L R$%.2f): R$%.2f\n", pg, cg);

    printf(" => Custo total do Alcool (preco/L R$%.2f): R$%.2f\n", pa, ca);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}