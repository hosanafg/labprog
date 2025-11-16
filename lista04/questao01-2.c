/*1. Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima
tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.*/

#include <stdio.h>

void adicionar_nums(int *px, const char *msg) {
    puts(msg);
    scanf("%d",px);
} 

/* Versão sem criar ponteiro p/ n1 e n2
int main () {

    int n1,n2;

    adicionar_nums(&n1,"Digite o primeiro número:  ");
    adicionar_nums(&n2, "Digite o segundo número: ");
    
    int soma=0;
    soma=n1+n2;
    
    printf("A soma de [%p] %d + [%p] %d = [%p] %d",&n1,n1,&n2,n2,&soma,soma);

    return 0;
}
    */

    //versão com ponteiros pra n1 e n2
int main () {
    int n1,n2;
    int *pn1=&n1,*pn2=&n2;

    adicionar_nums(&n1,"Digite o primeiro número:  ");
    adicionar_nums(&n2, "Digite o segundo número: ");

    int soma=0;
    soma=n1+n2;
    
    printf("A soma de [%p] N1 (%d) + [%p] N2 (%d) = [%p] %d",pn1,*pn1,pn2,*pn2,&soma,soma);

    return 0;
}