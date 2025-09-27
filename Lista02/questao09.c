/*9. A s ́erie de Fibonacci  ́e formada pela seguinte sequˆencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc.
Escreva um algoritmo que gere a s ́erie de Fibonacci at ́e o vig ́esimo termo.*/

#define ULTIMO 20
#include <stdio.h>
int main () {
    int prim=1,seg=1,prox;
    printf("%d %d ", prim, seg);

    for (int i=1;i<=ULTIMO;i++) {
        prox=prim+seg;
        printf("%d ",prox);
        prim=seg;
        seg=prox;
    } return 0;
}