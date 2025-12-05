/*8. Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
sucessor e antecessor.*/

#include <stdio.h>
int main () {
    int n;
    
    printf("Digite um número inteiro:  ");
    scanf("%d",&n);

    printf("Antecessor: %d\nSucessor: %d",n - 1, n + 1);
    return 0;
}