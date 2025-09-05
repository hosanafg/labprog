/*17. Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia
e sua  ́area. Use o valor de 3,14159 para “pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.*/

#include <stdio.h>
int main() {
    float pi=3.14159,r,d,a;
    printf("Qual o raio da circunferência?:  ");
    scanf("%f",&r);
    d=2*r;
    a=pi*r*r;

    printf("Raio da circunferência: %.2f\nDiâmetro: %.2f\nÁrea: %.5f",r,d,a);
    return 0;
}