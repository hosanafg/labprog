/*Escreva um programa que dado um vetor X de inteiros, realize a seguinte normaliza ̧c ̃ao dos dados
(min-max):
X' = (X − min(X)) / max(X) − min(X), onde min() e max() correspondem ao menor e maior do vetor, 
respectivamente.*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 5

void gerarRand (int *vetor, const int tamanho);
void imprimirVetor (int *vetor, const int tamanho);
int *buscarMenor(int *vetor, const int tamanho);
int *buscarMaior(int *vetor, const int tamanho);
float *vetorNormalizado (int *vetor, const int tamanho, int vMenor, int vMaior);

int main() {
    srand(time(NULL));
    int lista[TAM];

    gerarRand(lista,TAM);
    imprimirVetor(lista,TAM);
    int *pMenor=buscarMenor(lista,TAM);
    int *pMaior=buscarMaior(lista,TAM);

    printf("MENOR VALOR: %d\n",*pMenor);
    printf("MAIOR VALOR: %d",*pMaior);
    puts("\nVETOR NORMALIZADO: ");
    vetorNormalizado(lista,TAM,*pMenor,*pMaior);
    return 0;
}

void gerarRand (int *vetor, const int tamanho) {
    int valor_aleatorio;
    for (int i=0;i<tamanho;i++) {
        valor_aleatorio=(rand()%19);
        *(vetor+i)=valor_aleatorio;
    }
}

void imprimirVetor (int *vetor, const int tamanho) {
    for (int i=0;i<tamanho;i++) {
        printf("[0x%p] vetor [%d] = %d\n",(vetor+i),i,*(vetor+i));
    }
}

int *buscarMenor(int *vetor, const int tamanho) {
    int *vMenor = vetor;
    for (int i=1;i<tamanho;i++) {
        if (*(vetor + i) < *vMenor) vMenor = vetor+i;
    } return vMenor;
    return NULL;
}

int *buscarMaior(int *vetor, const int tamanho) {
    int *vMaior = vetor;
    for (int i=1;i<tamanho;i++) {
        if (*(vetor + i) > *vMaior) vMaior = vetor+i;
    } return vMaior;
}

float *vetorNormalizado (int *vetor, const int tamanho, int vMenor, int vMaior) {
    float *vNormalizado;
    vNormalizado = (float *)malloc(tamanho * sizeof(float));
    float denominador = (float)(vMaior-vMenor); 

    if (vNormalizado==NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL; 
    }
    
    if (denominador==0) {
        for (int i=0; i<tamanho; i++) {
            *(vNormalizado+i)=0;
            printf("%.2f  ", vNormalizado[i]);
        }
    } else {
        for (int i=0; i<tamanho; i++) {
            float numerador = (float)(*(vetor + i) - vMenor);
            *(vNormalizado+i) = numerador / denominador; 
            printf("%.2f  ", vNormalizado[i]);
        }
    } return vNormalizado;
}