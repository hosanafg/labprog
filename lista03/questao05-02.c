/*5. Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao
com uso da fun ̧c ̃ao strcat() e outra sem.*/
//versão COM strcat()

#define TAM 300
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void remover_vazio(char *str) {
    str[strcspn(str,"\n")]='\0';
}

void ler_string(char *destino, const char *msg) {
    puts(msg);
    fgets(destino,TAM, stdin);
    remover_vazio(destino);
}

void concat_string(char *primeira_string, char *segunda_string) {
    int i=0;
    int j=0;

    while (primeira_string[i]!='\0') {
        i++;
    } while (segunda_string[j]!='\0') {
        primeira_string[i]=segunda_string[j];
        i++; j++;
    } primeira_string[i]='\0';
}

int main () {
    char str1[TAM];
    char str2[TAM];

    ler_string(str1, "Digite a primeira palavra/frase: ");
    ler_string(str2, "Digite a segunda palavra/frase: ");
    concat_string(str1,str2);

    printf("Palavra/frase concatenada: %s\n",str1);
    
    return 0;
}