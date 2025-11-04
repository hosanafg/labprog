/*Sem strcmp()*/

#define TAM 300
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_string(char *destino, const char *mensagem) {
    puts(mensagem);
    fgets(destino,TAM,stdin);
}

int main () {

    char str1[TAM];
    char str2[TAM];

    ler_string(str1,"Digite a primeira palavra/frase:  ");
    ler_string(str2,"Digite a segunda palavra/frase:  ");

    int i=0;
    while (str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[i]) {
        i++;
    } if (str1[i] == str2[i]) puts("As strings são iguais");
    else {
        puts("Não são iguais");
        printf("A mudança acontece no caractere %d (índice [%d])",i+1,i);
    } return 0;
}
