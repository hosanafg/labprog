/*10. Fa ̧ca um programa que gere uma matriz bidimensional com elementos aleat ́orios e receba do usu ́ario
um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void limites_srand(int *lim, const char *msg) {
    puts(msg);
    scanf("%d",lim);
}

void tamanho_matriz (int *linhas, int *colunas) {
    puts("Quantas linhas a matriz vai ter?:  ");
    scanf("%d",linhas);
    puts("Quantas colunas?:  ");
    scanf("%d",colunas);
}

void preencher_matriz2D(int linhas, int colunas, int lista[linhas][colunas], int min, int max, int x_busca, int *contagem) {
    int valor_aleatorio;
    int amplitude=max-min + 1;
    int contador=0;

     for (int i=0; i<linhas; i++) {       
        for (int j=0; j<colunas; j++) {  
            valor_aleatorio = (rand() % amplitude) + min;
            lista[i][j]=valor_aleatorio;
                if(lista[i][j] == x_busca) {
                    contador+=1;
                }
        } *contagem=contador;
    } 
}

void mostrar_matriz2D(int linhas, int colunas, int lista[linhas][colunas]) {
    printf("\n--- Matriz 2D---\n");
    for (int i = 0; i < linhas; i++) {
        for (int j=0; j<colunas; j++) {
            printf("%4d", lista[i][j]);
        } printf("\n");
    }
}

int main () {
    srand(time(NULL));

    int n_linhas = 0;
    int n_colunas = 0;
    int inicio_limite = 0;
    int fim_limite = 0;
    int num_verificacao=0;
    int qtd=0;

    tamanho_matriz(&n_linhas,&n_colunas);    
    limites_srand(&inicio_limite,"Digite o limite inferior para os números aleatórios:  ");
    limites_srand(&fim_limite,"Digite o limite superior para os números aleatórios:  ");

    int matriz[n_linhas][n_colunas];

    puts("Digite um número inteiro para buscar na matriz: ");
    scanf("%d", &num_verificacao);

    preencher_matriz2D(n_linhas,n_colunas,matriz,inicio_limite,fim_limite,num_verificacao,&qtd);
    mostrar_matriz2D(n_linhas,n_colunas,matriz);

    printf("\n----> O elemento %d aparece %d vezes na sua matriz.", num_verificacao, qtd);
    return 0;
}