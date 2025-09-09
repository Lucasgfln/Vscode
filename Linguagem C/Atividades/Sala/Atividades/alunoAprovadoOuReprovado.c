#include <stdio.h>

int main(void){
    //n1 = Nota 1, n2 = Nota 2, m = Média.
    float n1, n2, m;
    printf("\n\n * Digite Duas Notas de Um Aluno... \n");
    printf(" * 1a Nota: ");
    scanf("%f", &n1);
    printf(" * 2a Nota: ");
    scanf("%f", &n2);

    m = (n1+n2)/2;

    if(m>=7.0) {
        printf(" => O Aluno(a) Foi Aprovado com Uma Media de %.1f\n\n", m);
    } else {
        if (m>=4.0 && m<7.0) {
            printf(" => O Aluno(a) Tem Direito a Uma Prova Final, Pois Teve a Media %.1f\n\n", m);        
        } else {
            printf(" => O Aluno(a) Foi Reprovado com Uma Media de %.1f\n\n", m);
        }
    
    }
    return 0;
}
