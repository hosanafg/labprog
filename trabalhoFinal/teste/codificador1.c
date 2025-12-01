#include <stdio.h>
#include <stdlib.h>

#define TAM 4
void popularMatriz(int *vetor, const int tamanho);
void imprimirMatriz(const int*vetor, const int tamanho);

int main () {
    
    int *lista=malloc(TAM*TAM*sizeof(int));
    popularMatriz(lista, TAM);
    imprimirMatriz (lista, TAM);
    free(lista);
    
    return 0;
}

void popularMatriz(int *vetor, const int tamanho) {
    int numero;
    for (int i=0;i<tamanho;i++){
        for (int j=0;j<tamanho;j++) {
            printf("Digite o elemento [%d] [%d] da matriz:  ",i,j);
            scanf("%d",&numero);
            vetor[(i*tamanho)+j]=numero;
        }
    }
}

void imprimirMatriz(const int*vetor, const int tamanho){
    for (int i=0; i<tamanho;i++) {
        for (int j=0; j<tamanho; j++) {
            printf("%3d ",vetor[(i*tamanho)+j]);
        } printf("\n");
    }
}
