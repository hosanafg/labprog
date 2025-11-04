/*1. Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.*/

#include <stdio.h>

void escolher_nums (int *num, const char *msg) {
    puts(msg);
    scanf("%d",num);
}

void soma (int *soma,int *num) {
    int soma; 
    soma
}

int main () {
    int n1,n2;
    
    escolher_nums (&n1,"Digite o primeiro número:  ");
    escolher_nums (&n2, "Digite o segundo numero:  ");

    printf("N1 [%p] = %d\n", &n1, n1);
    printf("N2 [%p] = %d\n", &n2, n2);

    return 0;
}