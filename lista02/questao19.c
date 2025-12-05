/*19. Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
faixa especificada pelo usu ́ario.*/

#include <stdio.h> 
int main () {
    int a,b,inicio,fim,soma=0,qtd=0;
    float media;
    
    printf("Digite um número:  ");
    scanf("%d",&a);
    printf("Digite um outro número:  ");
    scanf("%d",&b);

    inicio = (a<b) ? a:b;
    fim = (a>b) ? a:b;

    for (int i=inicio; i<=fim; i++) {
        soma+=i;
    } 
    
    media=(float)soma/((fim-inicio)+1);
    printf("Soma entre %d e %d = %d\nMédia: %.2f",inicio,fim,soma,media);

    return 0;
}