/*27. Escreva um programa que receba v ́arios n ́umeros inteiros (em uma estrutura de la ̧co) e apresente o
produto do maior pelo menor n ́umero apresentado. (Obs.: N ̃ao utilize vetores.) A condi ̧c ̃ao de sa ́ıda
do la ̧co  ́e o usu ́ario digitar um n ́umero negativo e par.*/

#include <stdio.h>
int main () {
    int n,menor,maior,primeiro=1;

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &n);

        if (n<0 && n%2==0) break;
        if (primeiro) {
            menor=maior=n;
            primeiro=0;
        } else {
            if (n<menor) menor=n;
            if (n>maior) maior=n;
        }
    } printf("Multiplicação entre %d e %d: %d\n", maior, menor, maior*menor);

    return 0;
}