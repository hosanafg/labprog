/*8. Uma loja vende seus produtos no sistema entrada mais duas presta ̧c ̃oes, sendo a entrada maior do que
ou igual `as duas presta ̧c ̃oes; estas devem ser iguais, inteiras e as maiores poss ́ıveis. 
Por exemplo, se ovalor da mercadoria for R$ 270,00, a entrada e as duas prestacoes sao iguais 
a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada  ́e de R$ 102,75 e as duas 
prestacoes s ̃ao iguais a R$ 100,00. Escreva um programa que receba o valor da mercadoria e 
forne ̧ca o valor da entrada e das duas presta ̧c ̃oes, de acordo com as regras acima.*/

#include <stdio.h>
int main () {
    float ent,p,total;
    printf("Qual o valor total da mercadoria em R$?:  ");
    scanf ("%f",&total);

    p=(int)total/3;
    ent=total-(2*p);

    printf("Entrada: R$ %.2f reais\n",ent);
    printf("Parcelas: 2X de R$ %.2f reais",p);

    return 0;
}