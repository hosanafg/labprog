/*1. Fa ̧ca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.
Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12*/

#include <stdio.h>
int main() {
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d",&x);

    printf("O número %d convertido em:\nHexadecimal: %X\nOctal: %o",x,x,x);
    return 0;
}