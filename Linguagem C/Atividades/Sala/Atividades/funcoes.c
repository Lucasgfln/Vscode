#include <stdio.h>

int fatorialde(int a) {
    if(a >= 0) {
        int fatorial = 1;

        for(int i = 1; i <= a; i++) {
            fatorial *= i;
        }

        return fatorial;
    } else {
        printf(" ERRO: NAO EXISTE FATORIAL DE UM NUMERO MENOR QUE 0!!!");
        return -1;
    }
}

float maior(float *vetor, int tam){
    float maior = vetor[0];

    for (int i = 1; i < tam; i++) {
        if(maior < vetor[i]) maior = vetor[i];
    }

    return maior;
}

