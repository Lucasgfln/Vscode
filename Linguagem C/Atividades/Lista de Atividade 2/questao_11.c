#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int eleitores, votos;
    char municipio[35];
    
    printf(" * Informe o Nome do Seu Municipio: ");
    scanf(" %[^\n]", municipio);

    printf("\n * Informe a Quantidade de Eleitores Aptos a Votar: ");
    scanf("%i", &eleitores);

    printf("\n * Informe a Quantidade de Votos Total, do Candidato Mais Votado: ");
    scanf("%i", &votos);


    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(eleitores < 20000 || votos > (eleitores * 0.50)) {
        printf(" => Seu Municipio *%s* Nao Tera Segundo Turno!", municipio);

        printf("\n\n<==================== F I N A L ====================>\n\n");
        return 0;
    } else {
        printf(" => Seu Municipio *%s* Tera Segundo Turno!", municipio);

    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}