/*6. Fa ̧ca um programa em C que leia uma string do usu ́ario e a apresente na forma inversa.*/

#define TAM 300
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ler_string (char *destino, const char *msg) {
    puts(msg);
    fgets (destino,TAM,stdin);
}

void inverter_string (char *destino, char *invertido) {
    int i=0, j=0;
    while (destino[i]!='\0') {
        i++;
    } i=i-1;
    while (i >= 0) {
        invertido[j] = destino[i];
        i--; 
        j++; 
    } invertido[j] = '\0';
} 

int main () {
    char palavra[TAM], palavra_inv[TAM];

    ler_string(palavra,"Digite a palavra: ");
    inverter_string(palavra,palavra_inv);

    printf("Palavra original: %s",palavra);
    printf("Palavra invertida: %s",palavra_inv);

    return 0;
}