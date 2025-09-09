#include <stdio.h>
#include <stdlib.h>

struct Funcionario {
    int idade, rg;
    float salario;
};

int main(void) {
    int n_funcionarios;

    printf(" * Informe a quantidade de funcionarios: ");
    scanf("%i", &n_funcionarios);

    struct Funcionario funcionarios[n_funcionarios];


    if(n_funcionarios > 0) {
        for(int i = 0; i < n_funcionarios; i++) {
            printf(" * Rg: ");
            scanf("%d", &funcionarios[i].rg);

            printf(" * Idade: ");
            scanf("%d", &funcionarios[i].idade);

            printf(" * Salario: ");
            scanf("%f", &funcionarios[i].salario);

            printf("\n ######### Funcionario %i ######### \n => Rg: %i\n => Idade: %i\n => Salario: %.2f \n\n", i+1, funcionarios[i].rg, funcionarios[i].idade, funcionarios[i].salario);
        }

        

    }



}