#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //num = Número.
    float num;

    printf(" * Digite um numero: ");
    scanf("%f", &num);    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(num >= 500 && num <= 1000) {
        printf(" => Seu numero *%.2f* esta entre 500 e 1000.", num);

    } else if(num != 5 && num != 200 && num != 400) {
        printf(" => Seu numero *%f* esta fora do escopo!!\n ** Lembre-se ele tem que ser igual a 5, a 200, a 400, ou estar no intervalo entre 500 e 1000.", num);        
    
    }else {
        switch ((int)num)
        {
        case 5:
            printf(" => Seu numero e igual a 5");
            break;

        case 200:
            printf(" => Seu numero e igual a 200");
            break;

        case 400:
            printf(" => Seu numero e igual a 400");
            break;

        default:
            printf(" !!! ALGO DE ERRADO NAO ESTA CERTO !!!");
            break;
        }

    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}