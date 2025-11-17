/*3. Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.*/
#include <stdio.h>
#include <limits.h>

int menorNumero(const char *msg);

int main () {
    int resultado;
    puts("Digite um número múltiplo de 3 para encerrar o programa!");
    resultado=menorNumero("Digite um número:  ");

    printf("O menor número digitado é: %d",resultado);
    return 0;
}

int menorNumero(const char *msg) {
    int numeroLido;
    int leituraScanf;
    int menorNumero = INT_MAX;

    do {
        puts (msg);
        leituraScanf = scanf("%d", &numeroLido);
        if (leituraScanf!=1) {
            puts("Entrada inválida! ");
            while (getchar() != '\n'); 
            continue;
        } if (numeroLido < menorNumero) menorNumero=numeroLido;
        if (numeroLido%3==0) {
            if (menorNumero == INT_MAX) return numeroLido;
            break;
        } 
    } while (1);
    
    return menorNumero;
}