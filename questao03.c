#include <stdio.h>
int main () {

    int x;
    printf("Digite um número:  ");
    scanf("%d",&x);

    printf("O número lido foi: %d\nO seu triplo é: %d\nO seu quadrado é: %d\nA sua metade é: %.2f",x,3*x,x*x,(float)x/2);
    return 0;
}