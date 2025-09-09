#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");

    int idade;

    printf(" * Informe sua idade: ");
    scanf("%i", &idade);
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(idade < 5) {
        printf(" * Infelizmente voce nao esta classificado para as eleminatorias!!! Pois vc tem menos de 5 anos");
    } else if(idade <= 7) {
        printf(" => Categoria Infantil A");
    } else if(idade <= 10) {
        printf(" => Categoria Infantil B");
    } else if(idade <= 13) {
        printf(" => Categoria Juvenil A");
    }else if(idade <= 17) {
        printf(" => Categoria Juvenil");
    } else {
        printf(" => Categoria Senior");
    }


    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}