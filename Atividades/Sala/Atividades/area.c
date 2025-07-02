#include <stdio.h>
#include <math.h>

int main(void){
    /*l = Largura, c = Comprimento, lp = largura do piso, cp = comprimento do piso, A = Área, Ap = Área do piso, 
    Amq = area em metro quadrado, Apqm = Area do piso em metro quadrado, qtdp = Quant. de piso, qtdpE = Quant. de piso Exata.*/
    float l, c, lp, cp, A, Ap, Amq, Apmq, qtdp, qtdpE; 
    printf("\n<=================== I N I C I O ===================>\n");

    

    printf("\n Por favor, digite a largura e o comprimento (em centimetros), do local, a seguir.");
    printf("\n Largura: ");
    scanf("%f", &l);    

    printf(" Comprimento: ");
    scanf("%f", &c);  
    
    printf("\n Agora por favor digite os mesmos valores em cm do piso. ");
    printf("\n Largura do piso: ");
    scanf("%f", &lp);    

    printf(" Comprimento do piso: ");
    scanf("%f", &cp);  
    
    A = l * c;
    Ap = lp * cp;

    qtdp = ceil(A/Ap);
    qtdpE = A/Ap;
    
    Amq = A / 10000;
    Apmq = Ap / 10000;
    
    if(Amq < ceil(Amq)) {
        printf("\n A area do local e de: %.0fcm^2 ou %.4fm^2", A, Amq);
    } else {
        printf("\n A area do local e de: %.0fcm^2 ou %.0fm^2", A, Amq);
    }

    if(Apmq < ceil(Apmq)) {
        printf("\n A area de cada piso e: %.0fcm^2 ou %.4fm^2", Ap, Apmq);
    } else {
        printf("\n A area de cada piso e: %.0fcm^2 ou %.0fm^2", Ap, Apmq);
    }
    
    if(qtdpE < ceil(qtdpE)) {
        printf("\n\n Sendo assim vao ser utilizados *%.0f* pisos no total\n Ja a quantidade exata e de %.4f pisos", qtdp, qtdpE);
    } else{
        printf("\n\n Sendo assim vao ser utilizados extamente *%.0f* pisos no total", qtdp);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");

    return 0;
}