/*24. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
h ́a neste tempo.*/

#include <stdio.h>
int main (){
    int t;
    printf("Quantos segundos?:  ");
    scanf("%d",&t);

    float m=t/60,h=t/3600;
    printf("%d segundos:\n%.2f minutos\n%.2f horas", t, m, h);

    return 0;
}