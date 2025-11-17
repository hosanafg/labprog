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
    
    int *p1=&n1;
    int *p2=&n2;

    puts("\nEstado inicial:");
    printf("[%p] N1 = %d\n",p1,*p1);
    printf("[%p] N2 = %d",p2,*p2);

    trocar(p1,p2);

    puts("\n\nEstado final:");
    printf("[%p] N1 = %d\n",p1,*p1);
    printf("[%p] N2 = %d\n",p2,*p2);

    return 0;
}