/*10. Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
deseja converter.*/

#include <stdio.h>
int main () {
    float cdol, r, conv;
    printf("Quantos reais você deseja converter?  ");
    scanf("%f",&r);

    printf("Quanto está a cotação do dolar?  ");
    scanf("%f",&cdol);

    conv=r/cdol;

    printf("R$%.2f reais equivalem a %.2f dolares",r,conv);
    return 0;
}