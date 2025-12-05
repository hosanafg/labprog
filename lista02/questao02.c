/*2. Refa ̧ca o programa da Quest ̃ao 1, utilizando a estrutura de repeti ̧c ̃ao com teste no final.*/

#include <stdio.h>
int main() {
    int n;
    char *diassemana[] = {"Inválido","Domingo","Segunda","Terça","Quarta","Quinta","Sexta","Sábado"};

    do {
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 7) printf("O %dº dia da semana é %s\n", n, diassemana[n]);
    else printf("Número inválido!\n");
    } while (n != 0);
    
    return 0;
}