#include <stdio.h>
#include <math.h>

int main(void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //gc = Graus Celsius, gf = Graus Fahrenheit.
    float gc, gf;

    printf(" Por favor digite qual a temperatura em Fahrenheit: ");
    scanf("%f", &gf);

    gc = (gf - 32) * 5 / 9;
    
    printf("\n A conversao de %.1f graus Fahrenheit para Graus Celsius e: %.1f Graus Celsius", gf, gc);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}