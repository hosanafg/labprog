/*7. Para que a divisao entre 2 numeros possa ser realizada, o divisor nao pode ser nulo (zero). 
Escreva um programa para ler 2 valores e imprimir o resultado da divisao do primeiro pelo segundo. 
OBS: O programa deve validar a leitura do segundo valor (que n ̃ao deve ser nulo). Enquanto for fornecido 
um valor nulo a leitura deve ser repetida.*/

#include <stdio.h>
int main () {
    int a,b;
    float res;

    printf("Digite o primeiro número:  ");
    scanf("%d",&a);
    printf("Digite o segundo número:  ");
    scanf("%d",&b);

    if (b==0) 
        do {
            printf("0 é um número inválido para o denominador! Digite o segundo número:  ");
            scanf("%d",&b);
        } while (b==0);
    
    res=(float)a/b;
    printf("%d / %d = %.2f",a,b,res);
    
    return 0;
}