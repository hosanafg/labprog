/*20. Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/

#include <stdio.h>
int main () {
    int a,b;
    printf("Digite o primeiro numero:  ");
    scanf("%d",&a);

    printf("Digite o segundo numero:  ");
    scanf("%d",&b);

    a=!(a%b)?printf("%d é múltiplo de %d",a,b):printf("Não é múltiplo");
    return 0;
}