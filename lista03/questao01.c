/*Questoes:
1. Faca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do
menor e maior elemento do vetor fornecido.*/

#define TAM 3
#include <stdio.h> 

void ordenar_lista (float lista[], int num) {
    float aux;

    for (int k=num-1; k>0; k--) {
        for (int j=0; j<k; j++) {
            if (lista[j]>lista[j+1]) {
                aux=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=aux;
            }
        }
    }
}

int main () {
    float n,soma=0;
    float lista[TAM];

    for (int i=0; i<TAM; i++) {
        printf ("Digite o [%d] número:  ",i+1);
        scanf("%f",&n);
        lista[i]=n;
    }

    ordenar_lista(lista, TAM);

    /*printf("\nLista Ordenada: ");
    for (int i=0; i<TAM; i++) {
        printf("%.2f ", lista[i]);
    } printf("\n");*/

    soma=lista[0]+lista[TAM-1];
    printf("A soma do menor número (%.2f) com o maior (%.2f) é = %.2f",lista[0],lista[TAM-1],soma);

    return 0;
}