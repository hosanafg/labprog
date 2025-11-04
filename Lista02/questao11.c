/*11. Refa ̧ca a quest ̃ao 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. 
O programa deve funcionar tanto para A > B quanto para B > A.*/

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
        if (i%4==0) printf("%d\n",i);
    } return 0;
}