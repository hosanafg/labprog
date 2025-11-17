/*8. Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50

int buscarCaractere(const char *lista,char letra) {
    int contador=0;
    while(*lista!='\0') {
        if (*lista==letra) contador++;
        lista++;
    } return (contador);
}

void preencherVetor (char *lista,const char *msg) {
    puts(msg);
    fgets(lista,TAM,stdin);
    lista[strcspn(lista,"\n")]=0;
}

int main () {
    char vetor[TAM];
    char x;
    preencherVetor(vetor,"Digite a palavra/frase:  ");
    puts("Digite a letra para busca:  ");
    scanf("%c",&x);
    
    int qtd=0;
    qtd=buscarCaractere(vetor,x);

    printf("A letra %c aparece %d vezes em '%s'\n",x,qtd,vetor);
    return 0;
}