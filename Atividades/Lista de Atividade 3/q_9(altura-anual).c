#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float manoel = 1.5, josue = 1.1;
    int ano = 25;
    int aux = ano;
    
    printf("   =============================\n");
    printf("   ||  Ano  | Manoel | Josue  ||\n");
    printf("   ||  20%i |  %.2f  |  %.2f  ||\n", ano, manoel, josue);
    while(manoel > josue) {
        ano++;
        manoel += 0.2;
        josue += 0.3;
        printf("   ||  20%i |  %.2f  |  %.2f  ||\n", ano, manoel, josue);
    }
    printf("   =============================\n");

    printf( " => Foram necessarios '%i' anos.", ano - aux);    

    //printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}