/*12. Reimplemente a quest ̃ao considerando que o vetor Y  ́e dado em fun ̧c ̃ao de X da seguinte forma:
onde r  ́e um n ́umero pseudoaleat ́orio, xi e yi correspondem ao i-esimo elemento do vetor X e Y ,
respectivamente. Considere os valores limites definidos na quest ̃ao anterior para yi, caso o valor
obtido a partir de xi esteja fora da faixa.*/

/*     yi =
xi if 0 < r ≤ 3;
xi − 1 if 3 < r ≤ 5
xi + 1 if 5 < r ≤ 7
xi − 2 if 8 < r ≤ 9
xi + 2 if 9 < r ≤ 10
*/

#define TAM 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarRand (int *vetor, int max);

int main () {

}

void gerarRand (int *vetor, int max) {
    srand(time(NULL));
    int valor_aleatorio;

    puts("VETOR X: ");
    for (int i=0;i<TAM;i++){
        valor_aleatorio=(rand()%max);
        vetor[i] = valor_aleatorio;
        printf("%d  ",vetor[i]);
    }
}

