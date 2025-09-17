/*Implemente um programa que tenha como entrada um n ́umero (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, ter ̧ca, quarta, quinta,
sexta, s ́abado). Se o n ́umero lido n ̃ao estiver no intervalo 1-7, imprima: “N ́umero de dia n ̃ao v ́alido”. 
Oprograma deve permanecer executando at ́e que o usu ́ario tecle o numero 0. (Utilize obrigatoriamente
teste no in ́ıcio).*/

#include <stdio.h>
int main () {
    int n;
    char *diassemana [8] = {"Inválido","Domingo","Segunda","Terça","Quarta","Quinta","Sexta","Sabado"};

    printf("Digite um número de 1 a 7:  ");
    scanf("%d",&n);

    if (n>=1 && n<=7) {
        printf("O %dº dia da semana é %s",n,diassemana[n]);
    } else printf("Número inválido");
        
    return 0;
}