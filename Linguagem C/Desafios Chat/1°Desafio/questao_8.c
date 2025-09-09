#include <stdio.h>
#include <string.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int tamanho = 0, verificador = 0;
    char char_num[255];

    printf(" * Digite um numero: ");
    scanf("%254s", char_num);
    /*scanf("%i", &num);
    
    sprintf(char_num, "%i", num);*/

    tamanho = strlen(char_num);

    for (int i = 0; char_num[i] != '\0'; i++) {
        if(char_num[i] == char_num[tamanho - (i+1)]){
            verificador += 1;
        } else {
            break;
        }
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(verificador == tamanho){
        printf("\n => O numero %s eh um palindromo!!", char_num);
    } else {
        printf("\n => O numero %s NAO eh um palindromo!!", char_num);
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}