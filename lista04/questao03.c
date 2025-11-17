/*3. Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.*/

#define TAM 5
#include <stdio.h>

int menorNumero(const char *msg);

int main () {
    int resultado;
    puts("Digite um número múltiplo de 3 para encerrar o programa!");
    resultado=menorNumero("Digite um número:  ");

    printf("O menor número digitado é: %d",resultado);
    return 0;
}

int menorNumero(const char *msg) {
    int numeroLido,menorNumero;
    int leituraScanf;

    puts (msg);
    leituraScanf = scanf("%d", &numeroLido);
    menorNumero=numeroLido;

    do {
        leituraScanf = scanf("%d", &numeroLido);
        if (leituraScanf!=1) {
            puts("Entrada inválida! ");
            while (getchar() != '\n'); 
            continue;
        } if (numeroLido%3==0) break;
        if (numeroLido < menorNumero) menorNumero=numeroLido;
    } while (1);
    
    return menorNumero;
}