/*24. Um triˆangulo retˆangulo pode ter lados que s ̃ao valores inteiros. O conjunto de trˆes 
valores inteiros para os lados de um triˆangulo retˆangulo  ́e chamado de tripla de Pit ́agoras. 
Esses trˆes lados precisam satisfazer o relacionamento de que a soma do quadrado de dois catetos  ́
e igual ao quadrado da hipotenusa. Ache todas as triplas de Pit ́agoras n ̃ao superiores a 500 
para cateto1, cateto2 e hipotenusa. Este  ́e um exemplo de computa ̧c ̃ao por for ̧ca bruta. 
Isso n ̃ao  ́e esteticamente atraente para muitas pessoas. Mas
existem muitos motivos para essas t ́ecnicas serem importantes. Como vocˆe descobrir ́a mais adiante no
Curso de Ciˆencia da Computa ̧c ̃ao, existem in ́umeros problemas interessantes para os quais n ̃ao existe
uma t ́ecnica algor ́ıtmica conhecida al ́em da simples for ̧ca bruta.*/

#include <stdio.h>
#include <math.h>

int main() {
    unsigned int cateto1=1, cateto2=1, hip;
    do {
        cateto2 = 1;  
        do {
            hip = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
            if (hip <= 500 && hip * hip == cateto1 * cateto1 + cateto2 * cateto2) {
                printf("Hipotenusa: %u, Cateto 1: %u, Cateto 2: %u\n", hip, cateto1, cateto2);
            } cateto2++;
        } while (cateto2 <= 500 && sqrt(cateto1 * cateto1 + cateto2 * cateto2) <= 500);
        cateto1++;
    } while (cateto1 <= 500);
    return 0;
}