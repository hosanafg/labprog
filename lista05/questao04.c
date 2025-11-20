/*Escreva uma fun ̧c ̃ao que some todos os elementos de um vetor de float. Utilize a fun ̧c ̃ao rand()
para alimentar o vetor com valores pseudo-aleat ́orios. A vari ́avel de somat ́orio deve ser fornecida
por referˆencia para a fun ̧c ̃ao.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
#define MX 13

void gerarRand (float *vetor, int tamanho);
void imprimirVetor(const float *vetor, const int tamanho);
void somarNums(const float *vetor, const int tamanho, float *somatorio);

int main () {
    float lista[TAM];
    float somaTotal = 0.0f;

    gerarRand(lista,TAM);
    imprimirVetor(lista,TAM);
    somarNums(lista,TAM,&somaTotal);

    printf("\n[0x%p] SOMA = %.2f",&somaTotal,somaTotal);
    return 0;
}

void gerarRand (float *vetor, int tamanho) {
    srand(time(NULL));
    for (int i=0;i<tamanho;i++){
        *(vetor+i) = rand()%100;
    }
}
void imprimirVetor(const float *vetor, const int tamanho) {
    puts("VETOR: ");
    for (int i=0;i<tamanho;i++) {
        printf("[0x%p] vetor [%d] = %.2f\n",&vetor[i],i,vetor[i]);
    }
}

void somarNums(const float *vetor, const int tamanho, float *somatorio) {
    *somatorio = 0.0f;
    for (int i=0;i<tamanho;i++) {
        *somatorio+= *(vetor+i);
    }  
}

