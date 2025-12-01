// Arquivo: main.c (Programa Principal)

#include <stdio.h>
#include <stdlib.h>
#include "logic.h" // Inclui os protótipos e defs.h

// Tamanho de exemplo para o bloco mínimo (critério de parada)
#define MIN_SIZE 4

// Valor de exemplo para a entropia (critério de divisão)
// 1.5 é um bom ponto de partida, mas deve ser ajustado.
#define ENTROPY_THRESHOLD 1.5 


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <caminho/para/imagem.pgm>\n", argv[0]);
        return 1;
    }

    const char *caminho_entrada = argv[1];
    const char *caminho_saida = "output_quadtree.pgm";
    Imagem *original = NULL;
    QuadNode *raiz = NULL;
    Imagem *reconstruida = NULL;

    printf("Iniciando Decomposição Quadtree...\n");

    // 1. Carregar a Imagem PGM
    original = carregar_pgm(caminho_entrada);
    if (original == NULL) {
        fprintf(stderr, "Erro ao carregar a imagem PGM: %s\n", caminho_entrada);
        return 1;
    }
    printf("Imagem carregada: %d x %d pixels.\n", original->largura, original->altura);


    // 2. Decompor em Quadtree
    printf("Decompondo (Limiar: %.2f, Tamanho Mín.: %d)...\n", ENTROPY_THRESHOLD, MIN_SIZE);
    
    // Assumimos que a raiz cobre toda a imagem
    raiz = decompor_imagem(original, ENTROPY_THRESHOLD, MIN_SIZE);
    
    if (raiz == NULL) {
        fprintf(stderr, "Erro na decomposição da Quadtree.\n");
        liberar_imagem(original);
        return 1;
    }


    // 3. Renderizar (Reconstruir) a Imagem
    // Criar um novo canvas vazio com o mesmo tamanho
    reconstruida = (Imagem*)malloc(sizeof(Imagem));
    reconstruida->largura = original->largura;
    reconstruida->altura = original->altura;
    reconstruida->data = (PixelCinza*)calloc(original->largura * original->altura, sizeof(PixelCinza));

    printf("Renderizando Quadtree...\n");
    // O 1 significa que queremos desenhar bordas para visualizar os blocos
    renderizar_quadtree(raiz, reconstruida, 1);


    // 4. Salvar o Resultado e Limpar
    salvar_pgm(reconstruida, caminho_saida);
    printf("Resultado salvo em: %s\n", caminho_saida);

    liberar_imagem(original);
    liberar_imagem(reconstruida);
    liberar_quadnode(raiz);

    printf("Processo concluído com sucesso.\n");
    return 0;
}