#include <stdio.h>
#include <math.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    int a, b, temp;

    printf(" * Digite a: ");
    scanf("%i", &a);

    printf(" * Digite b: ");
    scanf("%i", &b);

    if(a == b) {
        printf(" => Os numeros iformados sao iguais.");

    } else if( a > b) {
        temp = a;
        a = b;
        b = temp;
    }


    printf("\n\n<================ R E S U L T A D O ================>\n\n");
 
    printf("%i < %i", a, b);

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}