#include <stdio.h>

int main (void){
    printf("\n\n<=================== I N I C I O ===================>\n\n");
    float nota[3], media, media_final, nota_final;
    char nome_aluno[255];

    printf(" * Informe o nome completo do aluno: ");
    scanf(" %[^\n]", nome_aluno);

    for(int i = 0; i < 3; i++) {
        printf(" * Digite a %ia nota do aluno(a): ", i+1);
        scanf("%f", &nota[i]);
    }

    media = (nota[0]*2 + nota[1]*3 + nota[2]*3) / 10;

    printf("\n\n<================ R E S U L T A D O ================>\n\n");

    if(media >= 70){
        printf(" => O aluno(a) %s. Foi APROVADO com uma media de %.1f.", nome_aluno, media);
    } else if(media < 40) {
        printf(" => O aluno(a) %s. Foi REPROVADO com uma media de %.1f.", nome_aluno, media);
    } else {
        printf(" => O aluno(a) %s. Podera fazer a prova final, pois obteve uma media total de %.1f.\n\n", nome_aluno, media);

        printf(" * Informe a nota obtida pelo aluno(a) na prova final: ");
        scanf("%f", &nota_final);

        media_final = (media*3 + nota_final*2) / 5;

        if(media_final >= 60) {
            printf(" => O aluno(a) %s. Foi APROVADO com uma media final de %.1f.", nome_aluno, media_final);
        } else {
            printf(" => O aluno(a) %s. Foi REPROVADO com uma media final de %.1f.", nome_aluno, media_final);
        }
    }

    printf("\n\n<==================== F I N A L ====================>\n\n");
    return 0;
}