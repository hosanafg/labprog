/*19. Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/

#include <stdio.h>
int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("%d é %s\n", n,(n % 2==0?"par":"ímpar"));
    return 0;
}