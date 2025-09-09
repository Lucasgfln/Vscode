#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int mes;
    
    printf(" * Informe o mes desejado(1-12): ");
    scanf("%i", &mes);

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(mes < 1 || mes > 12) {
        printf(" => Esse mes nao existe!!!");

    } else {
        switch (mes)
        {
        case 1:
            printf(" => JANEIRO");
            break;

        case 2:
            printf(" => FEVEREIRO");
            break;

        case 3:
            printf(" => MARCO");
            break;

        case 4:
            printf(" => ABRIL");
            break;

        case 5:
            printf(" => MAIO");
            break;

        case 6:
            printf(" => JUNHO");
            break;

        case 7:
            printf(" => JULHO");
            break;

        case 8:
            printf(" => AGOSTO");
            break;

        case 9:
            printf(" => SETEMBRO");
            break;

        case 10:
            printf(" => OUTUBRO");
            break;

        case 11:
            printf(" => NOVEMBRO");
            break;

            case 12:
            printf(" => DEZEMBRO");
            break;   
        
        default:
          printf(" => Algo de Errado Esta Errado!!!!!!!!!!");
            break;
        }

    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}