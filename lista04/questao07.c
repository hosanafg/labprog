/*7. Escreva um programa que concatene duas strings utilizando ponteiros.*/

#include <stdio.h>
#include <string.h>
#define TAM 100

void digitarString (char lista[TAM], const char *msg) {
    puts(msg);
    fgets(lista,TAM,stdin);

    size_t len1 = strlen(lista);
    if (len1>0 && lista[len1-1]=='\n') {
        lista[len1-1]='\0';
    }
}

char *concatStrings (char *str1, char *str2, char *concat) {
    char *ponteiro1=str1;
    char *ponteiro2=str2;
    char *pConcat=concat;

    do{
        *pConcat++ = *ponteiro1++;
    } while (*(ponteiro1-1)!='\0');
    pConcat--;
    do {
        *pConcat++ = *ponteiro2++;
    } while (*(ponteiro2-1)!='\0');

    return concat;
}

int main () {
    char primeirovetor[TAM];
    char segundovetor [TAM];
    char vetoresJuntos[TAM*2];

    digitarString(primeirovetor,"Digite a primeira frase/palavra:  ");
    digitarString(segundovetor,"Digite a segunda frase/palavra:  ");

    char *resultado = concatStrings(primeirovetor, segundovetor, vetoresJuntos);
    printf("\nString Concatenada: %s\n", resultado);

    return 0;
}