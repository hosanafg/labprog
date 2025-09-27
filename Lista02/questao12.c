/*12. Elaborar um programa que mostre os resultados da tabuada de um n ́umero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.*/

#include <stdio.h>
int main () {
    int a,resp;

    printf("Digite um número inteiro:  ");
    scanf("%d",&a);
    
    for (int i=0;i<=10;i++) {
        resp=a*i;
        printf ("%d x %d = %d\n",a,i,resp);
    } return 0;
}