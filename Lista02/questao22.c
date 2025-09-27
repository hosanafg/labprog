/*22. Escreva um programa que leia um n ́umero inteiro e determine e imprima quantos d ́ıgitos no inteiros ̃
sao algarismos 7.*/

#include <stdio.h>
int main () {
    unsigned int a,dig,soma=0;
    int qtd = 0;
    puts("Digite um número inteiro:  ");
    scanf("%u",&a);

    unsigned int temp = a;
    while (temp > 0) {
        temp/=10;
        qtd++;
    } printf("Qtd de algarismos: %u\n",qtd);
    
    puts("Dígitos separados: ");
    for (int i=qtd-1; i>=0; i--) {
        int divisor=1;
        for (int j=0; j<i; j++) {
            divisor*= 10;
        } dig=(a/divisor)%10;
        printf("%d ",dig);

        if(dig==7) soma+=1;
    } printf("\nA quantidade de algarismos 7 nesse número são: [%u]",soma);

    return 0;
}