#include <stdio.h>
#include <ctype.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    printf("\n ! ! ! ESSE SISTEMA USA '.' AO INVES DE ',' ! ! !\n\n");
    //km_l = Quilômetro Por Litro.
    float percurso, consumoCombustivel, km_l;
    char tipoCarro;

    printf(" * Informe qual o tipo do seu carro(A|B|C): ");
    scanf("%c", &tipoCarro);

    tipoCarro = toupper(tipoCarro);

    if (tipoCarro != 'A' && tipoCarro != 'B' && tipoCarro != 'C') {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");

        printf(" => Nao existe esse tipo de carro!! Somente A, B, e C.");

        printf("\n\n<=================== E R R O ! ! ===================>\n");

        printf("<==================== F I N A L ====================>\n\n");

        return 0;
    }

    printf(" * Informe, em km, a distancia do percurso: ");
    scanf("%f", &percurso);

    if(tipoCarro == 'A') {
        km_l = 12;

    } else if(tipoCarro == 'B') {
        km_l = 9;

    } else {
        km_l = 8;

    }

    consumoCombustivel = percurso/km_l;

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Com um carro tipo *%c* um percurso de %.3fkm, voce precisara de no minimo %.2fL", tipoCarro, percurso, consumoCombustivel);
    printf("\n ! ! ! ESSE SISTEMA USA '.' AO INVES DE ',' ! ! !");

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}