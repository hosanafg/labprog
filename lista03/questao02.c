/*2. Faca um programa em C que leia uma string e um caractere do usuario e informe se a string de
entrada contem o caracter fornecido.*/

#define TAM 100
#include <stdio.h>
#include <string.h>

int main () {
    int contador=0;
    char letra;
    char str[TAM];

    puts("Digite uma palavra ou frase:  ");
    fgets(str,TAM,stdin);

    puts("Insira um caractere para comparação:  ");
    scanf("%c",&letra);
    
    int i=0;
    while (str[i]!='\0') {
        if(letra==str[i]) {
            contador+=1;
        } i++;
    } if (contador==0) printf ("A letra %c não aparece em nenhum momento na palavra/frase digitada",letra);
    else printf ("A letra %c aparece %d vezes na palavra/frase digitada",letra,contador);

    return 0;
}