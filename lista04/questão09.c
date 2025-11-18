/*9. Implemente o m ́etodo de ordena ̧c ̃ao bolha utilizando ponteiros.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5

void preencherVetor (int *vetor,int maximo);
void bubbleSort (int *vetor, int tamanho);
void imprimirVetor (int *vetor, int tamanho);

int main () {
    int lista[TAM];
    int valorMax;
    puts("Digite um valor máximo para o intervalo de nums. aleatórios:  ");
    scanf("%d",&valorMax);

    preencherVetor(lista,valorMax);
    puts("ANTES da ordenação:");
    imprimirVetor(lista,TAM);

    bubbleSort(lista,TAM);
    puts("\nAPÓS a ordenação:");
    imprimirVetor(lista,TAM);

    return 0;
}

void preencherVetor (int *vetor,int maximo) {
    srand(time(NULL));
    int valor_aleatorio;
    for (int i=0;i<TAM;i++){
        valor_aleatorio=(rand()%maximo);
        vetor[i]=valor_aleatorio;
    }
}

void imprimirVetor (int *vetor, int tamanho) {
    for (int i=0;i<tamanho;i++) {
        printf("%d ",vetor[i]);
    }
}

void bubbleSort (int *vetor, int tamanho) {
    int aux;
    int *pVetor=vetor;
    for (int i=0;i<tamanho;i++) {
        for (int j=0; j<tamanho-1-i; j++) {
            if (*(pVetor+j) > *(pVetor+j+1)) {
                aux = *(pVetor+j);
                *(pVetor+j) = *(pVetor+j+1);
                *(pVetor+j+1)=aux;
            }      
        }
    }
}