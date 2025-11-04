/*7. Fa ̧ca um programa em C que gere um vetor com 3 n ́umeros inteiros pseudoaleat ́orios no intervalo
[0, 19] e apresente a sua m ́edia aritm ́etica e geom ́etrica.*/

#define TAM 3
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preencher_vetor (int lista[]) {
    int valor_aleatorio;
    for (int i=0;i<TAM;i++) {
        valor_aleatorio = (rand() % 19) + 1;
        lista[i] = valor_aleatorio;
        printf("%d ", lista[i]);
    }
} 

void calcular_medias (int lista[],float *media_aritmetica, float *media_geometrica, int n) {
    int soma=0;
    float produto=1.0;

    for (int i=0; i<n; i++) {
        soma+=lista[i];
        produto*=lista[i];
    } *media_aritmetica=(float)soma/n;
    *media_geometrica=(float)pow(produto,1.0/n);
} 

int main () {
    int lista_num[TAM];
    float m_aritm=0.0,m_geom=0.0;
    srand(time(0));

    preencher_vetor(lista_num);
    calcular_medias(lista_num, &m_aritm, &m_geom, TAM);
    printf("\nMédia aritmética: %.2f\nMédia Geométrica: %.2f",m_aritm,m_geom);

    return 0;
}