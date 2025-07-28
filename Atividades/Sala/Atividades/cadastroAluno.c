#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alunos {
    char nome[255];

    int matricula, idade;
    
    double nota1, nota2;
};

typedef struct Alunos Alunos;


void cadastro(Alunos **aluno, int *i);
void exibirAlunoMatricula(Alunos *aluno, int i);
void exibirTodos(Alunos *aluno, int i);
void editarAluno(Alunos *aluno, int total);
//void mediaAluno(Alunos *aluno, int total);
//void mediaTurma(Alunos *aluno, int total);

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    Alunos *alunos = NULL;
    int i = 0, opcao = 0;
    
    do {
        system("cls");
        printf("\n <========== M E N U ==========>\n");
        printf(" [1] < Cadastrar Novo Aluno >\n");
        printf(" [2] < Exibir Informacoes De Um Aluno Especifico >\n");
        printf(" [3] < Exibir Todos Os Alunos >\n");
        printf(" [4] < Alterar Notas De Um Aluno >\n");
        printf(" [5] < Exibir Media De Um Aluno >\n");
        printf(" [6] < Exibir Media Da Turma >\n");
        printf(" [0] < Sair >\n");
        printf("\n * Escolha Uma Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastro(&alunos, &i);
                break;
            case 2:
                exibirAlunoMatricula(alunos, i);
                break;
            case 3:
                exibirTodos(alunos, i);
                break;
            case 4:
                editarAluno(alunos, i);
                break;
            /*case 5:
                mediaAluno(alunos, i);
                break;
            case 6:
                mediaTurma(alunos, i);
                break;*/
            case 0:
                printf(" Encerrando O Programa...\n");
                break;
            default:
                printf("\n\n<=================== E R R O ! ! ===================>\n\n");
                printf(" !! OPCAO INVALIDA !!");
        }
    } while(opcao != 0);
    

    free(alunos);
    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}

void cadastro(Alunos **aluno, int *i){
    int indice = 0;
    do {
        system("cls");
        Alunos *temp = realloc(*aluno, (*i + 1) * sizeof(Alunos));
        if(temp != NULL) {
            *aluno = temp;

            printf("\n\n <===== C A D A S T R O =====>\n");
            printf(" * Nome: ");
            scanf(" %[^\n]", (*aluno)[*i].nome);

            printf(" * Idade: ");
            scanf("%d", &(*aluno)[*i].idade);

            printf(" * Matricula: ");
            scanf("%d", &(*aluno)[*i].matricula);

            printf(" * Nota 1: ");
            scanf("%lf", &(*aluno)[*i].nota1);

            printf(" * Nota 2: ");
            scanf("%lf", &(*aluno)[*i].nota2);

            (*i)++;

        } else {
            printf("ERRO AO ALOCAR MEMORIA.\n");
        }

        do {
            printf("\n\n <=== OPCOES ===>\n");
            printf("[0] < Voltar >\n");
            printf("[1] < Novo Aluno >\n");
            printf(" * Escolha Uma Opcao: ");
            scanf("%d", &indice);
        } while (indice != 1 && indice != 0);

    } while (indice == 1);
}

int buscarAluno(Alunos *aluno, int i) {
    int matricula;
    printf(" * Informe A Matricula Do Aluno: ");
    scanf("%d", &matricula);
    for(int j = 0; j < i; j++) {
        if(matricula == aluno[j].matricula) {
            return j;
        }
    }

    printf("\n\n<=================== E R R O ! ! ===================>\n\n");
    printf(" !! Matricula nao encontrada !!\n !! Por Favor Verique se a matricula %i esta correta !!\n", matricula);
    return -1;
}

void exibirAluno (Alunos *aluno, int i) {
    printf("\n <======== ALUNO: '%s' ========>\n", aluno[i].nome);
    printf("\n => Nome: %s\n", aluno[i].nome);
    printf(" => Idade: %i\n", aluno[i].idade);
    printf(" => Matricula: %i\n", aluno[i].matricula);
    printf(" => 1a Nota: %.1lf\n", aluno[i].nota1);
    printf(" => 2a Nota: %.1lf\n", aluno[i].nota2);
}

void exibirAlunoMatricula(Alunos *aluno, int i){
    system("cls");
    printf("\n\n <======= I N F O R M A C O E S =======>\n");
    int repetir = 1;

    while(repetir) {
        int indice = buscarAluno(aluno, i);

        if(indice != -1){
            exibirAluno(aluno, indice);
        }

        do {
            printf("\n\n <=== OPCOES ===>\n");
            printf("[0] < Voltar >\n");
            printf("[1] < Outro Aluno >\n");
            printf(" * Escolha Uma Opcao: ");
            scanf("%d", &repetir);
        } while (repetir != 1 && repetir != 0);
        
    }
}

void exibirTodos(Alunos *aluno, int i) {
    system("cls");
    int aux;

    printf("\n\n <========== TODOS OS ALUNOS ==========>");
    for(int j = 0; j < i; j++) {
        exibirAluno(aluno, j);
    }
    printf("\n <=====================================>\n");

    printf(" [0] < Voltar >\n");
    printf(" * Escolha Uma Opcao: ");
    scanf("%i", &aux);
}

void editarNome(char *nome){
    int opcao;
    
    printf("\n <========== EDITAR NOME ==========>\n");
    do{
        char aux[255];
        printf("Nome Antigo: %s\n", nome);
        printf("Nome Novo: ");
        scanf(" %[^\n]", aux);

        printf("\n <========= Confirmacao =========>\n\n");
        printf(" => Voce realmente deseja modificar '%s' para '%s'\n", nome, aux);
        printf(" [1] < Confirmar >\n");
        printf(" [2] < Alterar >\n");
        printf(" [0] < Cancelar >\n");
        printf("\n * Escolha Uma Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            strcpy(nome, aux);
            printf(" <=== NOME ALTERADO COM SUCESSO ===>");
            opcao = 0;
            break;
        
        case 2:
            break;

        case 0:
            printf(" <==== NOME NAO ALTERADO ====>");
            break; 

        default:
            printf("\n\n<=================== E R R O ! ! ===================>\n\n");
            printf(" !! OPCAO INVALIDA !!");
            break;
        }

        system("cls");
    } while(opcao != 0);

}

void editarAluno(Alunos *aluno, int i){
    int opcao = 9;
    do{
        system("cls");
        int indice = buscarAluno(aluno, i);
        printf(" => Aluno '%s' Escolhido Com Sucesso!!", aluno[indice].nome);

        do {
            printf("\n <========== O QUE DESEJA ALTERAR? ==========>\n");
            printf(" [1] < NOME >\n");
            printf(" [2] < IDADE >\n");
            printf(" [3] < MATRICULA >\n");
            printf(" [4] < NOTA 1 >\n");
            printf(" [5] < NOTA 2 >\n");
            printf(" [0] < Sair >\n");
            printf(" [8] < Exibir Informações Desse Aluno >\n");
            printf(" [9] < Editar Outro Aluno >\n");
            printf("\n * Escolha Uma Opcao: ");
            scanf("%d", &opcao);

            if(opcao != 0 && opcao != 9) {
                switch(opcao) {
                case 1:
                    editarNome(aluno[indice].nome);                    
                    break;
                
                /*case 8:
                    exibirAluno(aluno, buscarMatricula()); //Resolve aí o baguí do buscar aluno, ta brekando o esquema aqui pow
                    break;*/

                default:
                    printf("\n\n<=================== E R R O ! ! ===================>\n\n");
                    printf(" !! OPCAO INVALIDA !!");
                    break;
                }
            } else {
                printf("\n\n<=================== E R R O ! ! ===================>\n\n");
                printf(" !! OPCAO INVALIDA !!");
            }
        } while (opcao != 0 && opcao != 9);
    } while(opcao != 0);
}

