/*2. Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o
nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um
elemento inteiro para identificar o n ́umero do pedido.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct {
    int numeroPeca, numeroPedido;
    float preco;
    char *nomePeca;
} estoque;

void lerInfos(estoque *ptrPeca);
void liberarMemoria(estoque *ptrPeca);

int main () {
    estoque peca;
    peca.nomePeca=NULL;

    lerInfos(&peca);
    puts("\n----Informações----\n");
    if (peca.nomePeca != NULL) printf("[Peça %d] Nome: '%s'\n", peca.numeroPeca, peca.nomePeca);
    else printf("Falha na leitura do nome da peça.\n");
    printf("[Peça %d] Pedido %d\n",peca.numeroPeca,peca.numeroPedido);
    printf("[Peça %d] Valor R$ %.2f reais\n",peca.numeroPeca,peca.preco);
    liberarMemoria(&peca);

    return 0;
}

void lerInfos (estoque *ptrPeca) {
    char bufferNomePeca[100000];
    puts("Digite o nome da peça:  ");
    
    if (fgets(bufferNomePeca, 100000, stdin) == NULL) {
        puts("Erro na leitura.");
        return;
    } bufferNomePeca[strcspn(bufferNomePeca,"\n")]='\0';
    
    size_t tamanho_string=strlen(bufferNomePeca);
    ptrPeca->nomePeca=(char *)malloc(tamanho_string + 1);
    
    if (ptrPeca->nomePeca == NULL) {
        puts("Erro: Falha na alocação de memória para o nome da peça.");
        return;
    } strcpy(ptrPeca->nomePeca, bufferNomePeca);

    puts("Digite o número da referida peça:  ");
    scanf("%d",&(ptrPeca->numeroPeca));

    puts("Digite o número do pedido:  ");
    scanf("%d",&(ptrPeca->numeroPedido));

    puts("Digite o preço em R$:  ");
    scanf("%f",&(ptrPeca->preco));

}

void liberarMemoria(estoque *ptrPeca) {
    if (ptrPeca->nomePeca != NULL) {
        free(ptrPeca->nomePeca); 
        ptrPeca->nomePeca=NULL;
        puts("\nMemória liberada.");
    }
}