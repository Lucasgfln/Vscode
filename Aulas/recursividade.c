#include <stdio.h>

int combinacao(int n, int p);
int fatorial(int n);

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    
    

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}

int fatorial(int n){
    int f = 1;

    for(int i = n; i > 1; i--) {
        f *= i;
    }

    return f;
}

int combinacao(int n, int p){
    int c;
    // c = n! / c! * (n-p)!;

    return c;
}

