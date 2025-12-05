/*14. Elabore um programa que apresente a quantidade de n ́umeros divis ́ıveis por 3 pertencentes a faixa
A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>

int main () {
    int a,b,inicio=0,fim=0;
    
    printf("Digite um número:  ");
    scanf("%d",&a);
    printf("Digite um outro número:  ");
    scanf("%d",&b);

    if(a>b) {
        inicio=b;
        fim=a;
    } else {
        inicio=a;
        fim=b;
    }
        
    for (int i=inicio;i<=fim;i++) {
        if (i%3==0) printf("%d\n",i);
    } return 0;
}