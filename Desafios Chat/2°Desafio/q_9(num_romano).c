#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    char num_rmn[16], verificador, c_rmn[7] = {"MDCLXVI"}; //16 pois o maior numero de letras usadas são 15 "MMMDCCCLXXXVIII" = 3888;
    int num[7] = {1000,500,100,50,10,5,1};

    printf(" * Digite um numero em romano(ateh 3999): ");
    scanf(" %[^\n]", num_rmn);

    int tam = strlen(num_rmn), i = 0, j = 0;
    int traducao[tam];


    for(i = 0; i < tam; i++) {
        verificador = 0;
        num_rmn[i] = toupper(num_rmn[i]);

        for(j = 0; j < 7; j++){
            if(num_rmn[i] == c_rmn[j]) {
                traducao[i] = num[j];

                verificador = 1;
            }
        } 

        if(verificador != 1){
            j = i;
            break;
        }
    } 
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    //Continue o código de soma e subtração, o mais dificil já foi eu acho;
    if(verificador == 1){
        int num_dcml = 0;

        printf(" => Seu numero romano '");
        for(i = 0; i < tam; i++){
            if(traducao[i] < traducao[i+1]){
                num_dcml += traducao[i+1] - traducao[i];
                i++;                
            } else {
                num_dcml += traducao[i];
            }

            printf("%c", num_rmn[i]);
        }
        printf("%c' em decimal eh: %i.", num_rmn[tam - 1], num_dcml);

    } else {
        printf(" => Caractere '%c' invalido!!!", num_rmn[j]);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}