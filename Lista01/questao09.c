/*9. Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.*/

#include <stdio.h>
int main () {
    float v,c,l,h;
    
    printf("Digite, nessa ordem, a largura, o comprimento e a altura da caixa:  ");
    scanf("%f %f %f",&l,&c,&h);
    v=c*l*h;

    printf("O volume total da caixa é de: %.2f unidades de área",v);
    return 0;
}