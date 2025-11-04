/*9. Fa ̧ca um programa que leia uma matriz bidimensional do usu ́ario, de dimens ̃ao 3x3, e apresente os
elementos da diagonal principal.*/

#define TAM 3
#include <stdio.h>

void preencher_matriz2D(int linhas, int colunas, int lista[TAM][TAM]) {
    for (int i=0; i<linhas; i++) {       
        for (int j=0; j<colunas; j++) {  
            printf("Digite o item [%d][%d] da matriz: ", i+1, j+1);
            scanf("%d", &lista[i][j]); 
        }
    }
}

void imprimir_matriz2D(int lista[TAM][TAM]) {
    printf("\n--- Matriz 2D---\n");
    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM; j++) {
            printf("%4d", lista[i][j]); 
        } puts("\n");
    }
}

void diagonal_principal (int lista[TAM][TAM], int *soma, int elemento[]) {
    *soma=0;
    for (int i=0; i < TAM; i++) {
        *soma += lista[i][i]; 
        elemento[i] = lista[i][i];
    } 
}

void imprimir_DiagonalPrincipal(int tamanho, int vetor[]) {
    printf("Diagonal principal: [");
    for (int i=0; i<tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    } printf("]\n");
}

int main () {

    int matriz[TAM][TAM];
    int soma_dprincipal;
    int dprincipal[TAM];

    preencher_matriz2D(TAM,TAM,matriz);
    imprimir_matriz2D(matriz);
    diagonal_principal(matriz,&soma_dprincipal,dprincipal);

    imprimir_DiagonalPrincipal(TAM, dprincipal);
    printf("A soma dos elementos da diagonal principal é = %d\n", soma_dprincipal);
    
    return 0;
}