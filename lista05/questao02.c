/*Modifique a quest ̃ao anterior criando uma fun ̧c ̃ao que armazena em um vetor os endere ̧cos do
primeiro e do  ́ultimo elemento PAR do vetor.*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 10

void gerarRand (int *vetor, const int max, const int tamanho);
void imprimirVetor (int *vetor, const int tamanho);
int *buscaPrimeiroPar(const int *vetor,const int tamanho);
int *buscaUltimoPar(const int *vetor,const int tamanho);
int encontrarPosicaoPrimeiroPar(const int *vetor, const int tamanho);
int encontrarPosicaoUltimoPar(const int *vetor, const int tamanho);

int main () {
    int lista[TAM];
    int vMax;
    int *primeiroPar=NULL;
    int *ultimoPar=NULL;

    puts("Qual o valor máximo para gerar os números aleatórios?:  ");
    scanf("%d",&vMax);

    gerarRand(lista,vMax,TAM);
    imprimirVetor(lista,TAM);

    primeiroPar=buscaPrimeiroPar(lista,TAM);
    ultimoPar=buscaUltimoPar(lista,TAM);

    int posPrimeiroPar=encontrarPosicaoPrimeiroPar(lista,TAM);
    int posUltimoPar=encontrarPosicaoUltimoPar(lista,TAM);

    puts("\nPrimeiro número par do vetor: ");
    printf("[0x%p]: lista [%d] = %d",primeiroPar,posPrimeiroPar,*primeiroPar);
    puts("\nÚltimo número par do vetor: ");
    printf("[0x%p]: lista [%d] = %d",ultimoPar,posUltimoPar,*ultimoPar);
    
    return 0;
}

void gerarRand (int *vetor, const int max, const int tamanho) {
    int valor_aleatorio;
    srand(time(NULL));
    for (int i=0;i<tamanho;i++){
        valor_aleatorio=(rand()%max);
        *(vetor+i)=valor_aleatorio;
    }
}
void imprimirVetor (int *vetor, const int tamanho) {
    puts("VETOR:  ");
    for (int i=0;i<tamanho;i++) {
        printf("%d ",vetor[i]);
    }
}
int *buscaPrimeiroPar(const int *vetor,const int tamanho) {
    const int *p=vetor;
    for (int i=0;i<tamanho;i++) {
        if (*(p+i)%2 == 0) {
            return (int *)(p+i);
        }
    } return NULL;
}
int *buscaUltimoPar(const int *vetor,const int tamanho) {
    const int *p=vetor;
    for (int i=tamanho-1;i>=0;i++) {
        if (*(p+i)%2 == 0) {
            return (int *)(p+i);
        }
    } return NULL;
}
int encontrarPosicaoPrimeiroPar(const int *vetor, const int tamanho) {
    for (int i=0;i<tamanho;i++) {
        if (*(vetor+i) % 2 == 0) return i;
    } return -1;
}
int encontrarPosicaoUltimoPar(const int *vetor, const int tamanho) {
    for (int i=tamanho-1;i>=0;i--) {
        if (*(vetor+i) % 2 == 0) return i;
    } return -1;
}