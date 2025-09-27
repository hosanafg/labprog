/*13. Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>
int main () {
    int a,b,inicio,fim,soma=0;

    printf("Digite um número inteiro:  ");
    scanf("%d",&a);
    printf("Digite um outro número inteiro:  ");
    scanf("%d",&b);
    
    if(a>b) {
        inicio=b; fim=a;
    } else {
        inicio=a; fim=b;
    }

    for (int i=inicio;i<=fim;i++) {
        soma+=i;
    } printf ("Somatório entre %d e %d = %d\n",inicio,fim,soma);
    
    return 0;
}