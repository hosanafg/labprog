#ifndef DEFS_H
#define DEFS_H
#include <stdint.h>

typedef struct {
    unsigned char nivelCinza;
} PixelCinza;

typedef struct {
    int largura, altura;
    PixelCinza *data; 
} Imagem;

struct qtreeNode {
    int x,y,largura,altura;       
    PixelCinza cor;          
    struct qtreeNode *no;  
    struct qtreeNode *ne;  
    struct qtreeNode *so;  
    struct qtreeNode *se;
} ;

typedef struct qtreeNode QuadNode;

#endif