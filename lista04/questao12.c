/*12. Reimplemente a quest ̃ao considerando que o vetor Y  ́e dado em fun ̧c ̃ao de X da seguinte forma:
onde r  ́e um n ́umero pseudoaleat ́orio, xi e yi correspondem ao i-esimo elemento do vetor X e Y ,
respectivamente. Considere os valores limites definidos na quest ̃ao anterior para yi, caso o valor
obtido a partir de xi esteja fora da faixa.*/

#define TAM 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarRand (int *vetor, int max, const char *msg);
void matrizOcorrencias(const int *vetorA, const int *vetorB, int randmaximo, int matrizFreq[][randmaximo], int tamanho);
void imprimirMatriz (int randmaximo, int matrizFreq[][randmaximo]);

int main () {
    int vetorX[TAM];
    int vetorY[TAM];
    int valorMaximo;

    puts("Digite um numero limite p/ o intervalo de nums. aleatórios:  ");
    scanf("%d",&valorMaximo);

    gerarRand(vetorX,valorMaximo,"Vetor X: ");
    
    return 0;
}

void gerarRand (int *vetor, int max,const char *msg) {
    int valor_aleatorio;
    puts(msg);
    for (int i=0;i<TAM;i++){
        valor_aleatorio=(rand()%max);
        vetor[i]=valor_aleatorio;
        printf("%d  ",vetor[i]);
    }
}

/*     yi =
xi if 0 < r ≤ 3;
xi − 1 if 3 < r ≤ 5
xi + 1 if 5 < r ≤ 7
xi − 2 if 8 < r ≤ 9
xi + 2 if 9 < r ≤ 10
*/

void matrizOcorrencias(const int *vetorA, const int *vetorB, int randmaximo, int matrizFreq[][randmaximo], int tamanho) { 
    for (int i=0; i<randmaximo; i++) {
        for (int j=0; j<randmaximo; j++) {
            matrizFreq[i][j] = 0;
        }
    } for (int i=0; i<tamanho; i++) {
        if (vetorA[i] < randmaximo && vetorB[i] < randmaximo) {
            matrizFreq[vetorA[i]][vetorB[i]]++;
        }
    }
}

void imprimirMatriz (int randmaximo, int matrizFreq[][randmaximo]) {
    for (int i=0; i<randmaximo; i++) { 
        for (int j=0; j<randmaximo; j++) { 
            printf("%3d  ", matrizFreq[i][j]); 
        } puts("\n");
    }
}

