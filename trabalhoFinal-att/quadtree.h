#ifndef QUADTREE_H
#define QUADTREE_H

typedef struct QuadNode {
    unsigned char value; 
    int is_leaf;         
    int x, y, width, height; 
    struct QuadNode *children[4]; 
} QuadNode;

QuadNode* build_quadtree(unsigned char *pData, int total_width, int start_x, int start_y, int size,int threshold);
void reconstructPGMImage(QuadNode *node, unsigned char *pData, int total_width);
void freeQuadtree(QuadNode *node);

#endif 