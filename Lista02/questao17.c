/*17. Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.*/

#include <stdio.h>
#define fim 100

int main () {
    float f,c=10;
    for(c=10; c<=fim; c+= 10) {
        f=((9*c)+160)/5;
        printf("%.2f graus ºC = %.2f  graus ºF\n",c,f);
    } return 0;
}