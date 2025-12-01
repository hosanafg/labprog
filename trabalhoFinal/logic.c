#include "logic.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

// --- Funções de Imagem ---

Imagem* carregar_pgm(const char *caminho) {
    // Implementar a leitura do formato PGM (P2 ou P5) aqui. 
    // Isso envolve ler o cabeçalho (magic number, largura, altura, max_val) 
    // e depois ler os dados de pixel no campo data.
    // Lembre-se de alocar a memória para a struct Imagem e para Imagem->data.
    return NULL; // Retorno dummy
}

void salvar_pgm(Imagem *img, const char *caminho) {
    // Implementar a escrita do formato PGM aqui (ex: cabeçalho P2 ou P5).
}

void liberar_imagem(Imagem *img) {
    // Implementar liberação da memória de img->data e de img.
}

// --- Funções da Quadtree ---

QuadNode* decompor_imagem(Imagem *img, double limiar_entropia, int min_tamanho) {
    // Implementar a função recursiva principal (incluindo cálculo de entropia e alocação de QuadNode).
    return NULL; // Retorno dummy
}

void renderizar_quadtree(QuadNode *node, Imagem *canvas, int desenhar_bordas) {
    // Implementar a travessia da árvore e o preenchimento do canvas com a cor média dos nós folha.
}

void liberar_quadnode(QuadNode *node) {
    // Implementar a liberação recursiva dos nós (free).
}