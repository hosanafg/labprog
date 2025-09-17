/*6. Fa ̧ca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.*/

#include <stdio.h>
int main() {
    int h,m,s,total;
    printf("Quantas horas, minutos e segundos se passaram?:  ");
    scanf("%f %f %f",&h,&m,&s);
    total = h*60*60 + m*60 + s;
    printf("Total de segundos: %d",total);
}