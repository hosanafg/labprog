/*26. Escreva um programa que imprima uma tabela dos equivalentes bin ́ario, octal e hexadecimal dos
n ́umeros decimais no intervalo de 1 a 256.*/

#define FIM 31
#define TAM 8
#include <stdio.h>
int main () {

    int bin[TAM],num;
    int rep=1;

    printf("Conversão de inteiro para binário:\n");
    
    do {
        num = rep;
        for (int i = TAM - 1;i>=0;i--) {
            bin[i]=num%2;
            num/=2;
        } for (int j = 0; j < TAM; j++) {
            printf("%d", bin[j]);
        } printf("  ---> %d \n", rep);
        rep++;
    } while (rep<FIM);

    printf("\n\nConversão de inteiro para hexadecimal:\n");
    for (int k=0;k<FIM;k++){
        printf("%d ----> %X\n",k,k);
    }

    printf("\n\nConversão de inteiro para octal:\n");
    for (int m=0;m<FIM;m++){
        printf("%d ----> %o\n",m,m);
    }
    return 0;
}