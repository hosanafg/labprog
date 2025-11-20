/*5. Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros
gerados aleatoriamente.*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MX 30;

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
int main () {
    int tamanhoVetor;
    int *pLista;

    puts("Qual o tamanho do vetor?:  ");
    
}