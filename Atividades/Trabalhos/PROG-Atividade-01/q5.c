/*
Lucas Gabriel Felipe de Lima do Nascimento
TADS_2025.1
*/
#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int calorias[3][5] = {{0,180,230,250,350},{0,75,110,170,200},{0,30,70,100,65}}, soma_cal = 0;
    int escolha[3];
    char refeição[3][5][20] = {{"Nenhum","Vegetariano","Peixe","Frango","Carne"},{"Nenhuma","Abacaxi","Sorvete Diet","Mousse Diet","Mousse Chocolate"},{"Nenhuma","Cha","Suco de Laranja","Suco de Melao","Refrigerante Diet"}};
    //psb = Prato, Sobremesa e Bebida.
    char psb[3][10] = {"Prato","Sobremesa","Bebida"};

    printf(" |   Prato           |    Sobremesa         |        Bebida          |\n");
    printf(" |-------------------|----------------------|------------------------|\n");
    printf(" | 0 - Nenhum        | 0 - Nenhuma          | 0 - Nenhuma            |\n");
    printf(" | 1 - Vegetariano   | 1 - Abacaxi          | 1 - Cha                |\n");
    printf(" | 2 - Peixe         | 2 - Sorvete diet     | 2 - Suco de laranja    |\n");
    printf(" | 3 - Frango        | 3 - Mousse diet      | 3 - Suco de melao      |\n");
    printf(" | 4 - Carne         | 4 - Mousse chocolate | 4 - Refrigerante diet  |\n");

    printf("\n * Digite o numero correspondente ao que voce deseja....\n");

    for(int i = 0; i < 3; i++) {
        printf(" * %s: ", psb[i]);
        scanf("%i", &escolha[i]);
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" => Com a refeicao: \n");

    for(int i = 0; i < 3; i++) {
        printf(" => %s: %s - %i cal\n", psb[i], refeição[i][escolha[i]],calorias[i][escolha[i]]);
        soma_cal += calorias[i][escolha[i]];
    }   

    printf("\n => O total de calorias da sua refeicao eh: %i cal", soma_cal);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}