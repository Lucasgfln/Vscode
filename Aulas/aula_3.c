#include <stdio.h>

int main(void){
    int X = 100;
    short x = 100;


    printf(" Bytes <int> => %i \n",sizeof(X));
    printf(" Bytes <short> => %i \n",sizeof(x));

    return 0;
}