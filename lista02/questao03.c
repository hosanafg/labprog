/*3. Escreva um programa que leia um n ́umero inteiro e positivo F e calcule o fatorial deste n ́umero.*/

#include <stdio.h>
int main () {
    int F;
    long int fat=1;

    printf("Digite um número inteiro positivo:  ");
    scanf("%d",&F);
    
    for (int i=1;i<=F;i++) {
        fat*=i;
    } printf("%d!=%ld",F,fat);

    return 0;
}