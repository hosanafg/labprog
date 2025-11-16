/*5. Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.*/
#include <string.h>
#include <stdio.h>
#define TAM 10

int tamanhoString (const char lista[]) {
    int contador=0;
    const char *p=lista;
    
    while (*p!='\0'){
        contador++;
        p++;
    } return contador;
}

int main() {
    
    char vetor[TAM];
    int tamString;
    
    puts("Digite sua palavra/frase:  ");
    fgets(vetor,TAM,stdin);

    tamString=tamanhoString(vetor);

    printf("Tamanho da string: %d caracteres ",tamString);
    return 0;
}