/*4. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garcom.*/

#include <stdio.h>
int main() {
    float v,t=1.1;

    printf("Quanto deu o valor bruto da sua conta?:  ");
    scanf("%f",&v);

    printf("O valor total a ser pago é R$%.2f reais",v*t);
    return 0;
}