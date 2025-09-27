/*25. Calcule o valor de π a partir da s ́erie infinita. Imprima uma tabela que mostre o valor de 
π aproximado por um termo dessa s ́erie, e depois por dois
termos, trˆes termos, e assim por diante.*/

#include <stdio.h>
int main () {
    float pi=0.000000;
    int n;
    printf("Quantas repetições no laço devemos utilizar para calcular a aproximação de pi? (obs.: quanto maior o número de repetições, mais aproximado o resultado final):  ");
    scanf("%d",&n);

    for (int i=0;i<=n;i++) {
        int denominador = 2*i+1;
        float f=(float)4/denominador;

        if (i % 2 == 0) pi+=f;
        else pi-=f;
        
        printf("O valor de pi para [%d] termos é = %.6f\n", i+1, pi);
    } return 0;
}