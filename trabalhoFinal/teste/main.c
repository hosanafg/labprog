#include <stdio.h>
#include <stdlib.h>
#include "pgm.h"     
#include "quadtree.h"

int main(int argc, char *argv[]) {
    struct pgm img;
    QuadNode *root = NULL;

    if (argc != 3) {
        printf("Formato: %s <imagemEntrada.pgm> <imagemSaida.pgm>\n", argv[0]);
        exit(1);
    }

    readPGMImage(&img, argv[1]);
    
    if (img.c != img.r || (img.c & (img.c - 1)) != 0) {
        printf("A imagem precisa ser quadrada.\n");
        exit(1);
    }
    
    root = build_quadtree(img.pData, img.c, 0, 0, img.c);
    printf("\nQuadtree construída com sucesso. Nó Raiz (Media): %hhu\n", root->value);
    
    reconstructPGMImage(root, img.pData, img.c);
    writePGMImage(&img, argv[2]);

    printf("Imagem da Quadtree salva como: %s\n", argv[2]);

    if (img.pData != NULL) free(img.pData);
    if (root != NULL) freeQuadtree(root); 
    
    return 0;
}