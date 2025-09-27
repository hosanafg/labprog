/*5. Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condi ̧c ̃ao de termino do programa  ́e quando o usu ́ario digitar zero.*/

#include <stdio.h>
int main() {
    int n, maior = 0;

    do {
        printf("Digite um número (0 para parar): ");
        scanf("%d", &n);
        if (n > maior) 
            maior = n;
    } while (n != 0);

    if (maior != 0) printf("O maior número digitado foi %d\n", maior);
    else printf("Nenhum número válido foi digitado.\n");

    return 0;
}