/*Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
dos elementos de X.*/
/*Para N = 7, temos:
X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]
Portanto,
F = [2, 0, 4, 2, 1, 3, 2]*/
/*Observe que as ocorrˆencias dos elementos de X s ̃ao armazenadas em F nos  ́ındices de mesmo valor.*/

#define TAM 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarRand (int *vetor, int max);
void contarOcorrencias(const int *vetor,int *vetorFreq);
void imprimirVetor (const int *vetorFreq, int *tamanho);

int main () {
    int vetorX[TAM];
    int n;

    puts("Digite um numero:  ");
    scanf("%d",&n);

    int *vetorFrequencia;
    vetorFrequencia = (int *) calloc(n, sizeof(int));

    gerarRand(vetorX,n);
    contarOcorrencias(vetorX,vetorFrequencia);
    imprimirVetor(vetorFrequencia,&n);

    free(vetorFrequencia);
    return 0;
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

void contarOcorrencias(const int *vetor,int *vetorFreq) {
    puts("\nVETOR Y:");
    for (int i=0;i<TAM;i++) {
        vetorFreq[vetor[i]]++;
    } 
}

void imprimirVetor (const int *vetorFreq, int *tamanho) {
    for (int i=0; i<*tamanho; i++) {
        printf("%d  ", vetorFreq[i]); 
    }
}