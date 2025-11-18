/*Escreva um programa que gere dois vetores (X e Y ) com n ́umeros pseudoaleat ́orios no intervalo
[0,N − 1]. Crie uma matriz M com dimens ̃oes NxN que armazene as coocorrˆencias dos elementos
de X e Y*/

#define TAM 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void gerarRand (int *vetor, int max, const char *msg);
void matrizOcorrencias(const int *vetorA, const int *vetorB, int randmaximo, int matrizFreq[][randmaximo], int tamanho);
void imprimirMatriz (int randmaximo, int matrizFreq[][randmaximo]);

int main () {
    srand(time(NULL));

    int vetorX[TAM];
    int vetorY[TAM];
    int valorMaximo;

    puts("Digite um numero limite p/ o intervalo de nums. aleatórios:  ");
    scanf("%d",&valorMaximo);

    gerarRand(vetorX,valorMaximo,"Vetor X: ");
    gerarRand(vetorY,valorMaximo,"\nVetor Y: ");

    puts("\n\nMATRIZ COOCORRÊNCIAS: ");
    int matrizFrequencias[valorMaximo][valorMaximo];
    matrizOcorrencias(vetorX, vetorY, valorMaximo, matrizFrequencias, TAM);
    imprimirMatriz(valorMaximo, matrizFrequencias);

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