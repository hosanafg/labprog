/*2. Escreva um programa que troque o valor de dois n ́umeros utilizando ponteiros.*/

#include <stdio.h>

void trocar (int *a, int *b) {
    int temp;
    temp = *a; *a = *b; *b = temp;
}
void escolherNums(int *num,const char *msg) {
    puts(msg);
    scanf("%d",num);
}
int main () {
    int n1;
    int n2;

    escolherNums(&n1,"Digite o primeiro numero:  ");
    escolherNums (&n2, "Digite o segundo numero:  ");

    puts("\nEstado inicial:");
    printf("[%p] N1 = %d\n",&n1,n1);
    printf("[%p] N2 = %d",&n2,n2);

    trocar(&n1,&n2);

    puts("\n\nEstado final:");
    printf("[%p] N1 = %d\n",&n1,n1);
    printf("[%p] N2 = %d\n",&n2,n2);

    return 0;
}