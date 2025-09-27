/*18. Escrever um programa que calcule e apresente o somat ́orio do n ́umero de gr ̃aos de trigo que se pode
obter num tabuleiro de xadrez, obedecendo `a seguinte regra: colocar um gr ̃ao de trigo no primeiro
quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um
gr ̃ao, no segundo quadro colocam-se dois gr ̃aos (tendo neste momento trˆes gr ̃aos), no terceiro quadro
colocam-se quatro gr ̃aos (tendo neste momento sete gr ̃aos), no quarto quadro colocam-se oito gr ̃aos
(tendo-se ent ̃ao quinze gr ̃aos) at ́e atingir o sexag ́esimo quarto quadro.*/


#include <stdio.h>
#define TAM 64 

int main () {
    unsigned long long qtd=1; 
    unsigned long long total=1; 

    for (int i=1;i<=TAM;i++){
        qtd*=2;
        total += qtd;
    } printf("Total de graos no tabuleiro: %llu",total);

    return 0;
}