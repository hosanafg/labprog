/*7. Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.*/

#include <stdio.h>
int main() {
    int n, n2;
    printf("Digite um numero inteiro:  ");
    scanf("%d",&n);
    n2=n*n;
    printf("número digitado: %d\n%d^2=%d",n,n,n2);
    return 0;
}