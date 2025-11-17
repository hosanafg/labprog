/*4. Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endere ̧cos. Teste
o vetor com tipos de dados diferentes, analise os endere ̧cos. O que vocˆe observou?*/

#define TAM 5
#include <stdio.h>

void popular_vetor (int lista[], const char *msg) {
    puts(msg);
    for (int i=0;i<TAM;i++) {
        scanf("%d",&lista[i]);       
    }
}

void imprimirVetor(int lista[]) {
    for (int i=0;i<TAM;i++) {
        printf("[%p] vetor[%d] = %d\n",&lista[i],i,lista[i]);
    }
}

int main () {
    int vetor[TAM];
    
    popular_vetor(vetor,"Preencha o vetor com os cinco números:  ");
    imprimirVetor(vetor);
    
    return 0;
}