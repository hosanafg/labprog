/*16. Escrever um programa que receba um valor inteiro do usu ́ario e apresente o seu valor absoluto (m ́odulo).
N ̃ao utilize estrutura de decis ̃ao if.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite um número inteiro:  ");
    scanf("%d",&n);
    
    int m = abs(n);
    
    printf("|%d| = %d",n,m);
    return 0;
}