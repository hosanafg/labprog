/*5. Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros
gerados aleatoriamente.*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void gerarRand (int *vetor, const int tamanho);
void imprimirVetor(int *vetor, const int tamanho);
float calcularMedia(int *vetor, const int tamanho);
void ordenarVetor(int *vetor,const int tamanho);
float calcularMediana(int *vetor, const int tamanho);
int calcularModa (int *vetor, const int tamanho);

int main () {

    int tamanhoVetor=10;
    int lista[tamanhoVetor];
    srand(time(NULL));

    //puts("Qual o tamanho do vetor?:  ");
    //scanf("%d",&tamanhoVetor);
    //int *pLista = malloc(tamanhoVetor * sizeof(int));

    gerarRand(lista,tamanhoVetor);
    puts("ANTES DE ORDENAR: ");
    imprimirVetor(lista,tamanhoVetor);

    float media=calcularMedia(lista,tamanhoVetor);
    float mediana=calcularMediana(lista,tamanhoVetor);
    int moda=calcularModa(lista,tamanhoVetor);

    puts("\nAPÓS ORDENAR: ");
    imprimirVetor(lista,tamanhoVetor);

    printf("\n-------------------------------\n");
    printf("MÉDIA = %.2f\n",media);
    printf("MEDIANA = %.2f\n", mediana);
    if (moda==-1) puts("MODA = O vetor nao possui moda (nenhum numero se repete).");
    else printf("MODA = %d\n", moda);

    return 0;
}

void gerarRand (int *vetor, const int tamanho) {
    int numero_aleatorio;
    for (int i=0;i<tamanho;i++) {
        numero_aleatorio=(rand()%100);
        *(vetor+i) = numero_aleatorio;
    }
}

void imprimirVetor(int *vetor, const int tamanho) {
    for (int i=0;i<tamanho;i++) {
        printf("%d  ",*(vetor+i));
    }
}

float calcularMedia(int *vetor, const int tamanho) {
    int soma=0;
    for (int i=0;i<tamanho;i++) {
        soma+= *(vetor+i);
    } float mediaVetor = ((float)soma)/tamanho;
    return mediaVetor;
}

void ordenarVetor(int *vetor,const int tamanho) {
    int aux;
    for (int i=0;i<tamanho; i++) {
        for (int j=0; j<tamanho-1-i; j++) {
            if (*(vetor+j)>*(vetor+j+1)) {
                aux = *(vetor+j);
                *(vetor+j) = *(vetor+j+1);
                *(vetor+j+1) = aux;
            }
        } 
    }
}

float calcularMediana(int *vetor, const int tamanho) {
    float medianaVetor;
    ordenarVetor(vetor,tamanho);
    if (tamanho%2==0) medianaVetor = (((float)(vetor[tamanho/2])+vetor[(tamanho/2)-1])/2);
    else medianaVetor=(float)(vetor[tamanho/2]);
    
    return medianaVetor;
}

int calcularModa (int *vetor, const int tamanho) {
    int totalOcorrencias[100]={0};
    int modaVetor=0;
    int contagemMaxAtual=0;

    for(int i = 0; i < tamanho; i++) {
        int valor = vetor[i];
        if (valor >= 0 && valor < 100) {
            totalOcorrencias[valor]++;
        }
    }
    for (int i = 0; i < 100; i++) { 
        if(totalOcorrencias[i] > contagemMaxAtual) {
            contagemMaxAtual = totalOcorrencias[i];
            modaVetor = i;
        }
    }
    if (contagemMaxAtual <= 1) {
        return -1; 
    }
    return modaVetor;
}