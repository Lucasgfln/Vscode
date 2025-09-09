#include <stdio.h>

int main(void){
    printf("\n\n    <=================== I N I C I O ===================>\n\n");
    //n = nota, na = nome do aluno
    float n1, n2, n3, ntf;
    char na[50];

    printf(" Qual o primeiro nome do aluno: ");
    scanf("%s", na);

    printf("\n A seguir digite as notas do aluno em sequencia (0-100).");
    printf("\n 1a Nota: ");
    scanf("%f", &n1);

    printf("\n 2a Nota: ");
    scanf("%f", &n2);

    printf("\n 3a Nota: ");
    scanf("%f", &n3);

    ntf = (n1+n2+n3) / 3;

    printf("\n O aluno(a) %s teve a media de: %.1f", na, ntf);

    printf("\n\n    <==================== F I N A L ====================>\n\n");
    return 0;
}