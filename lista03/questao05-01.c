/*5. Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao
com uso da fun ̧c ̃ao strcat() e outra sem.*/
//versão COM strcat()

#define TAM 300
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void remover_vazio(char *str) {
    str[strcspn(str, "\n")]='\0';
}

void ler_string(char *destino, const char *msg) {
    puts(msg);
    fgets(destino,TAM, stdin);
    remover_vazio(destino);
}


int main () {
    char str1[TAM];
    char str2[TAM];

    ler_string(str1, "Digite a primeira palavra/frase: ");
    ler_string(str2, "Digite a segunda palavra/frase: ");

    strcat(str1,str2);
    printf("Palavra/frase concatenada: %s\n",str1);
    
    return 0;
}