/*6. Escreva um programa que copie uma string para outra usando ponteiros.*/

#define TAM 100
#include <stdio.h>

int main () {
    char lista[TAM];
    puts("Digite a sua palavra/frase:  ");
    fgets (lista,TAM,stdin);

    const char *ponteiroLista=lista;
    char copiaLista[TAM];
    char *ponteiroCopia=copiaLista;

    do{
        *ponteiroCopia++ = *ponteiroLista++;
    } while (*(ponteiroLista - 1) !='\0');
    

    puts("\nOriginal: ");
    printf("[%p]: %s",(void *)lista,lista);
    puts("\nCópia: ");
    printf("[%p]: %s",(void *)copiaLista,copiaLista);

    return 0;

}