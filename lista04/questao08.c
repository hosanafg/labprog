/*8. Escreva um programa que busque um caractere fornecido em uma string utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50

void escolherCaractere(char *letra, const char *msg);
int contarCaractere(const char *lista,char letra);
void preencherVetor (char *lista,int tamanho, const char *msg);

int main () {
    char vetor[TAM];
    char x;
    
    preencherVetor(vetor,TAM,"Digite a palavra/frase:  ");
    escolherCaractere(&x, "Digite a letra para ser buscada:  ");
    int qtd=0;
    qtd=contarCaractere(vetor,x);

    printf("A letra %c aparece %d vezes em '%s'\n",x,qtd,vetor);
    return 0;
}

void escolherCaractere(char *letra, const char *msg) {
    puts(msg);
    scanf(" %c",letra);
}

int contarCaractere(const char *lista,char letra) {
    int contador=0;
    while(*lista!='\0') {
        if (*lista==letra) contador++;
        lista++;
    } return contador;
}

void preencherVetor (char *lista, int tamanho, const char *msg) {
    puts(msg);
    fgets(lista,tamanho,stdin);
    lista[strcspn(lista,"\n")]=0;
}