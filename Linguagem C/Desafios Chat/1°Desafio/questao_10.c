#include <stdio.h>
//Vou ignorar a regra para numero negativo em binario;

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    double numero = 0, fracionaria = 0;
    int binario[240000], original = 0, i = 0;

    printf(" * Digite um numero: ");
    scanf("%lf", &numero);

    original = numero;
    fracionaria = numero - original;

    int tamanho = 0;

    while(original > 0) {
        binario[i] = original % 2;
        original = original/2;

        i++;
        tamanho++;
    }


    printf("\n\n<================ R E S U L T A D O ================>\n\n");



    printf(" => ");
    while(tamanho > 0) {
        printf("%i", binario[tamanho - 1]);
        tamanho--;
    }
    
    if(fracionaria > 0) {
        i = 0;
        tamanho = 0;

        printf(".");

        while(fracionaria > 0) {
            fracionaria *= 2;
            int bit = (int)fracionaria;
            binario[i] = bit;
            fracionaria -= bit;

            printf("%i", binario[i]);

            if(tamanho == 10) {
                printf(" aproximadamente!!");
                break;
            }
            
            i++;
            tamanho++;
        }
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}