/*1. Escreva um programa em C que informe o endere ̧co do primeiro elemento PAR de um vetor de
inteiros.*/

#include <stdio.h>
#include <time.h>
#define TAM 10

void gerarRand (int *vetor, const int max, const int tamanho);
void imprimirVetor (int *vetor, const int tamanho);
int *buscaPares(const int *vetor,const int tamanho);
int encontrarPosicaoPrimeiroPar(const int *vetor, const int tamanho);

int main () {
    int lista[TAM];
    int vMax;
    int *primeiroPar=NULL;

    puts("Qual o valor máximo para gerar os números aleatórios?:  ");
    scanf("%d",&vMax);

    gerarRand(lista,vMax,TAM);
    imprimirVetor(lista,TAM);
    primeiroPar=buscaPares(lista,TAM);
    int posPrimeiroPar=encontrarPosicaoPrimeiroPar(lista,TAM);
    puts("\nPrimeiro número par do vetor: ");
    printf("[0x%p]: lista [%d] = %d",primeiroPar,posPrimeiroPar,*primeiroPar);
    return 0;
}

void gerarRand (int *vetor, const int max, const int tamanho) {
    int valor_aleatorio;
    srand(time(NULL));
    for (int i=0;i<tamanho;i++){
        valor_aleatorio=(rand()%max);
        vetor[i]=valor_aleatorio;
    }
}
void imprimirVetor (int *vetor, const int tamanho) {
    puts("VETOR:  ");
    for (int i=0;i<tamanho;i++) {
        printf("%d ",vetor[i]);
    }
}
int *buscaPares(const int *vetor,const int tamanho) {
    const int *p=vetor;
    for (int i=0;i<tamanho;i++) {
        if (*(p+i)%2 == 0) {
            return (int *)(p+i);
        }
    } return NULL;
}
int encontrarPosicaoPrimeiroPar(const int *vetor, const int tamanho) {
    for (int i=0;i<tamanho;i++) {
        if (vetor[i] % 2 == 0) return i;
    } return -1;
}