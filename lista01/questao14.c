/*14. Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.*/

#include <stdio.h>
int main () {
    float diaria=50.25,vtotal,tx,imposto=0.9;
    int numdias;

    printf("Qual o total de dias trabalhados?:  ");
    scanf("%d",&numdias);

    if(numdias<10) {
        vtotal=diaria*numdias*imposto;
    } else if (numdias<20) {
        tx=1,2;
        vtotal=diaria*numdias*tx*imposto;
    } else {
        tx=1.3;
        vtotal=diaria*numdias*tx*imposto;
    } printf("O valor total a ser recebido é R$%.2f reais",vtotal);
    return 0;
}