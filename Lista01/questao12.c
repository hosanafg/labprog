/*12. Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores. O objetivo  ́e que a
vari ́avel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valores
ap ́os a efetiva ̧c ̃ao do processamento da troca.*/

#include <stdio.h>
int main () {
    int a,b,temp;
    printf("Digite o primeiro numero:  ");
    scanf("%d",&a);

    printf("Digite o segundo numero:  ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("a=%d, b=%d",a,b);
    return 0;
}