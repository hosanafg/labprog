// Arquivo: quadtree_logic.h (Protótipos necessários)

#include "quadtree.h"
#include <stdio.h> // Para FILE

// --- Funções de Imagem ---
// Carrega uma imagem PGM (formato P2/P5) do disco para a struct Imagem
Imagem* carregar_pgm(const char *caminho);

// Salva a imagem (reconstruída ou original) no disco
void salvar_pgm(Imagem *img, const char *caminho);

// Libera a memória alocada para a Imagem
void liberar_imagem(Imagem *img);


// --- Funções da Quadtree ---
// Função principal que inicia a decomposição recursiva
QuadNode* decompor_imagem(Imagem *img, double limiar_entropia, int min_tamanho);

// Função para reconstruir a imagem a partir da Quadtree e preencher o canvas
void renderizar_quadtree(QuadNode *node, Imagem *canvas, int desenhar_bordas);

// Libera a memória alocada para a Quadtree recursivamente
void liberar_quadnode(QuadNode *node);