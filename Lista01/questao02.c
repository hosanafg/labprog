/*Fa ̧ca um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.*/
#include <stdio.h>
int main () {
    double x;
    printf("Digite um numero real:  ");
    scanf("%lf",&x);
    printf("O número com apenas uma casa decimal é: %.1f",(float)x);
    return 0;
}