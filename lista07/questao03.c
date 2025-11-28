/*3. Escreva um programa em C que gere um vetor com n ́umeros aleat ́orios e calcule sua m ́edia. Orga-
nize uma Estrutura com as seguintes informa ̧c ̃oes: ponteiro para a matriz, quantidade de elementos
e a m ́edia.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int *vetor;           
    unsigned char qtd;       
    float media;          
} DadosVetor; 

void gerarRand (DadosVetor *dados);
void imprimirVetor (DadosVetor *dados);
void liberarMemoria (DadosVetor *dados);

int main () {
    DadosVetor dados;
    srand(time(NULL));

    gerarRand(&dados);
    imprimirVetor(&dados);
    liberarMemoria(&dados); 

    return 0;
}

void gerarRand (DadosVetor *dados) {
    puts ("Digite a quantidade de elementos do vetor:  ");
    scanf("%hhu",&(dados->qtd));
    dados->vetor = (int *)malloc(dados->qtd * sizeof(int));

    if (dados->vetor == NULL) {
        puts("Erro: Falha na alocação de memória.");
        exit (1);
    }

    for (int i=0; i< dados->qtd;i++) {
        dados->vetor[i] = rand() % 100;
    }
}

void imprimirVetor (DadosVetor *dados) {
    puts("\nVetor:");
    for (int i=0; i< dados->qtd; i++) {
        printf("%d ",dados->vetor[i]);
    }
}

void liberarMemoria(DadosVetor *dados) {
    if (dados->vetor!= NULL) {
        free(dados->vetor); 
        dados->vetor=NULL;
        puts("\nMemória liberada.");
    }
}