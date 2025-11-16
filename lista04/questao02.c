/*2. Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.*/

#include <stdio.h>

void trocar (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int n1,n2;
    int *p1=&n1,*p2=&n2;

    puts("Digite o primeiro número:  ");
    scanf("%d",&n1);
    puts("Digite o segundo número:  ");
    scanf("%d",&n2);

    puts("\n\nEstado inicial:");
    printf("[%p] N1 = %d\n",p1,*p1);
    printf("[%p] N2 = %d",p2,*p2);

    trocar(p1,p2);

    puts("\n\nEstado final:");
    printf("[%p] N1 = %d\n",p1,*p1);
    printf("[%p] N2 = %d\n",p2,*p2);

    return 0;
}