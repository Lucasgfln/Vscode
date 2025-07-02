#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    //num = Número
    float num1, num2;
    char operador;

    printf(" * Essa calculador necessita de dois numero e um operador no formato 'Numero' 'Operador' 'Numero', ex: '10' '+, -, *, /' '2'...\n");
    
    printf(" * Informe o 1o numero: ");
    scanf("%f", &num1);

    getc(stdin);

    printf(" * Informe o operador desejado(+, -, *, /): ");
    scanf("%c", &operador);
    
    if(operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("\n\n<=================== E R R O ! ! ===================>\n\n");
        printf(" => Seu Operador e diferente de '+', '-', '*', '/'");
        
        return 0;
    }
    
    printf(" * Informe o 2o numero: ");
    scanf("%f", &num2);

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    switch (operador)
    {
    case '+':
        printf(" => %.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf(" => %.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case '*':
        printf(" => %.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case '/':
        if(num2 != 0) {
            printf(" => %.2f / %.2f = %.2f", num1, num2, num1 / num2);

        } else{
            printf(" => Divisao por zero invalida.");

        }
        
        break;
    
    default:
        printf(" ==> Algo de errado esta errado!!");
        break;
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}