/*1. Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.*/

#include <stdio.h>

void escolher_nums (int *num, const char *msg) {
    puts(msg);
    scanf("%d",num);
}

int main () {
    int n1,n2;
    int soma=0;

    escolher_nums (&n1,"Digite o primeiro número:  ");
    escolher_nums (&n2, "Digite o segundo numero:  ");

    soma=n1+n2;

    printf("[%p] N1 = %d\n", &n1, n1);
    printf("[%p] N2 = %d\n", &n2, n2);
    printf("[%p] SOMA = %d",&soma,soma);

    return 0;
}