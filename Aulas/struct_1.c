#include <stdio.h>
#include <stdlib.h>

typedef struct Funcionario {
    int idade, rg;
    float salario;
};

int main(void) {
    int n_funcionarios;

    printf(" * Informe a quantidade de funcionarios: ");
    scanf("%i", n_funcionarios);

    struct Funcionario funcionarios[n_funcionarios];


    if(n_funcionarios > 0) {
        for(int i = 0; i < n_funcionarios; i++) {
            
        }

    }



}