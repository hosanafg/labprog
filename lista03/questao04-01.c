/*4. Fa ̧ca um programa em C que leia duas strings do usu ́ario e informe se elas s ̃ao iguais. Fa ̧ca uma
vers ̃ao com o uso da fun ̧c ̃ao strcmp() e outra sem.*/

/*versão COM strcmp()*/

#define TAM 300
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    char str1[TAM];
    char str2[TAM];

    puts("Digite a primeira palavra/frase:  ");
    fgets(str1,TAM,stdin);

    puts("Digite a segunda palavra/frase:  ");
    fgets(str2,TAM,stdin);

    int comp=strcmp(str1,str2);
    if (comp==0) puts("As strings são iguais");
    else puts ("As strings não são iguais");

    return 0;
}