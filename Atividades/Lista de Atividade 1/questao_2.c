#include <stdio.h>
#include <math.h>

int main(void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");

    //r = Raio do circulo, a = Aréa do circulo, c = Comprimento, pi = pi;
    float r, a, c;

    const float PI = 3.14;

    printf(" Digite o raio (em cm) do circulo que deseja calcular a area e o comprimento: ");
    scanf("%f", &r);

    c = 2 * PI * r;
    a = PI * (pow(r,2));

    printf("\n => Comprimento: %.4f", c);
    printf("\n => Area: %.4f", a);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}