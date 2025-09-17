/*13. Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.*/

#include <stdio.h>
int main() {
    float tempc, tempf;
    printf("Qual a temperatura em graus Celsius?:  ");
    scanf("%f",&tempc);

    tempf=((9*tempc)+160)/5;

    printf("%.2f ºC = %.2f ºF",tempc,tempf);
    return 0;
}