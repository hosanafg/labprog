/*3. Fa ̧ca um programa em C que leia uma string do usu ́ario e informe a quantidade de caracteres da
string fornecida. N ̃ao use a fun ̧c ̃ao strlen().*/

#define TAM 1000
#include <stdio.h>
#include <string.h>

int main () {
    int contador=0,i=0;
    char str[TAM];

    puts("Digite uma palavra ou frase:  ");
    fgets(str,TAM,stdin);

    while (str[i]!='\0') {
        contador+=1;
        i++;
    } printf("A palavra/frase digitada possui %d caracteres",contador);
    return 0;
}