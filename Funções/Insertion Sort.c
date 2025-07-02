#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[] = "dcba";
    int n = strlen(palavra);
    int i, j;
    char chave;

    printf("String original: %s\n", palavra);

    // Insertion Sort direto
    for (i = 1; i < n; i++) {
        chave = palavra[i]; // chave = "c"; 2°Round agora chave = b; 3°Round agora chave = a;
        j = i - 1; // j = 0; 2°Round agora j = 1 e i =2; 3°Round agora j = 2 e i = 3;

        while (j >= 0 && palavra[j] > chave) { // vê se j é menor que 0 e se "d" é maior que "c"; 2°Round agora vê se d é maior que b; 3°Round agora vê se c > a;
            palavra[j + 1] = palavra[j]; // tranforma c em d ficando ddba, e depois continua; 2°Round agora transforma b em d ficando cdda; 3°Round c = d, b = c, d = b → aaa?
            j--; // j agora menor que 0; 2°Round agora j = 0 mas c nn é maior que d; 3°Round vai até j = -1;
        }

        palavra[j + 1] = chave; // agora d = c, finalizando cdba; 2°Round agora d = b, finalizando cbda; 3°Round agora posição 0 recebe 'a', finalizando abcd;
    }

    printf("String ordenada: %s\n", palavra);

    return 0;
}

/*Inicial: d c b a

Round 1 (i=1):
    * chave = 'c', j=0
    * 'd' > 'c' → move 'd' → d d b a
    * insere 'c' → c d b a

Round 2 (i=2):
    * chave = 'b', j=1
    * 'd' > 'b' → move 'd' → c d d a
    * 'c' > 'b' → move 'c' → c c d a
    * insere 'b' → b c d a

Round 3 (i=3):

chave = 'a', j=2
    * 'd' > 'a' → move 'd' → b c d d
    * 'c' > 'a' → move 'c' → b c c d
    * 'b' > 'a' → move 'b' → b b c d
    * insere 'a' → a b c d
*/
