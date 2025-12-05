/*21. Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se
ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em
seus d ́ıgitos individuais.]*/

#define qtd 5
#include <stdio.h>
int main () {
    unsigned int a,digito,digito2;
    puts("Digite um número inteiro de 5 dígitos:  ");
    scanf("%u",&a);

    for (int i = qtd-1; i>=0; i--) {
        int divisor=1;
        for (int j=0; j<i; j++) {
            divisor*= 10;
        } digito=(a/divisor) % 10;
        printf("%d ",digito);
    } 
    while (a > 0) {
        digito2 = a % 10;   
        //printf("\n%d ", digito2);
        a/=10;       
    } if (digito==digito2) puts ("\nÉ palíndromo");
    else puts ("\nNão é palindromo");

    return 0;
}