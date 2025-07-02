#include <stdio.h>
#include <ctype.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int vogais = 0, consoantes = 0, i = 0;
    char frase[320];

    printf(" * Digite uma frase qualquer: ");
    scanf(" %[^\n]", frase);

    for (i = 0; frase[i] != '\0'; i++) {
        frase[i] = tolower(frase[i]);

        if (frase[i] >= 'a' && frase[i] <= 'z'){
            if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
            vogais += 1;
            } else {
                consoantes += 1;
            }
        }
        
    }

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf(" Existem ....\n => %i Vogais \n => %i Consoantes.", vogais, consoantes);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}