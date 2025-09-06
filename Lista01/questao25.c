/*25. Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).*/

#include <stdio.h>
#include <math.h>

int main () {
    int x1,y1,x2,y2;
    float d;
    printf("Digite as coordenadas do primeiro ponto (x1, y1):  ");
    scanf("%d %d",&x1,&y1);
    printf("Digite as coordenadas do segundo ponto (x2, y2):  ");
    scanf("%d %d",&x2,&y2);

    d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));

    printf("A distância entre os dois pontos é %.2f",d);
    return 0;
}