/*22. Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321.*/

#include <stdio.h>
#include <string.h>

int main () {
    char n[3];
    int i,tam;

    printf("Digite um número com 3 dígitos:  ");
    scanf("%s",n);
    tam=strlen(n);

    printf("Número invertido: ");
    for (i=tam - 1; i>=0; i--) {
        printf("%c", n[i]);
    }  return 0;
}