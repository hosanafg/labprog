/*8. Fa ̧ca um programa em C que gere um vetor com 100 n ́umeros inteiros pseudoaleat ́orios no intervalo
definido pelo usu ́ario e apresente esse vetor ordenado (crescente). Fa ̧ca uma vers ̃ao com o m ́etodo
de ordencao por selecao e outra pelo metodo bolha (bubble sort).*/

/*Método bubble sort*/

#define TAM 100
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void limites(int *lim, const char *msg) {
    puts(msg);
    scanf("%d",lim);
}

void preencher_vetor (int lista[], int n, int *inicio, int *fim) {
    int valor_aleatorio;
    int min=*inicio;
    int max=*fim;

    if (min > max) {
        printf("ERRO: Valor mínimo (%d) é maior que o valor máximo (%d).", min, max);
        return; 
    } int amplitude=max-min + 1;

    puts("Vetor original: ");
    for (int i=0;i<n;i++) {
        valor_aleatorio = (rand() % amplitude) + min;
        lista[i] = valor_aleatorio;
        printf("%d ", lista[i]);
    } puts("\n");
}

void ordenar_BubbleSort (int lista[], int num) {
    int aux;
    for (int k=num-1; k>0; k--) {
        for (int j=0; j<k; j++) {
            if (lista[j]>lista[j+1]) {
                aux=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=aux;
            }
        } 
    }
}

void imprimir_vetorOrdenado(int lista[], int n) {
    puts("\nVetor Ordenado:");
    for (int i=0; i<n; i++) {
        printf("%d ",lista[i]);
    } puts("\n");
}

int main () {
    int valor_minimo,valor_maximo;
    srand(time(0));
    int vetor[TAM];

    limites(&valor_minimo,"Digite o valor mínimo para o limite:  ");
    limites(&valor_maximo, "Digite agora o valor máximo:  ");

    preencher_vetor(vetor, TAM, &valor_minimo, &valor_maximo);
    ordenar_BubbleSort(vetor, TAM);
    imprimir_vetorOrdenado(vetor, TAM);

    return 0;
}