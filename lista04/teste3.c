#include <stdio.h>
/*int main (void) {
   int i = 1234; 
   printf (" i = %d\n", i);
   printf ("&i = %ld\n", (long int) &i);
   printf ("&i = %p\n", (void *) &i);
   return 0;
}*/


void troca(int *p, int *q){
    int aux;
    aux=*p; *p=*q; *q=aux;
}
/*
} int main () {
    int a,b;

    puts("Digite o número:  ");
    scanf("%d",&a);
    puts("Digite outro numero:  ");
    scanf("%d",&b);

    printf("Antes da troca:\n[%p] a = %d\n[%p] b = %d",&a,a,&b,b);
    troca(&a,&b);
    printf("Após a troca:\n[%p] a = %d\n[%p] b = %d",&a,a,&b,b);

}*/

/*Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, 
digamos min e max, e deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor.  
Escreva também uma função main que use a função mm.
*/

#define TAM 5
void preencherVetor(int lista[], int *min, int *max, const char *msg) {
    puts(msg);
    scanf("%d",&lista[0]);

    *min = lista[0];
    *max = lista[0];

    for (int i=1;i<TAM;i++) {
        puts(msg);
        scanf("%d",&lista[i]); 
        if (lista[i] > *max) { 
            *max = lista[i];
        } if (lista[i]<*(min)) {
            *min=lista[i];
        } 
    } 
}

int main () {
    int maior,menor;
    int vetor[TAM];

    preencherVetor(vetor,&menor,&maior,"Digite o numero");
    puts("--Antes da Troca--");
    printf("Menor valor: [%p] %d\n",&menor,menor);
    printf("Maior Valor: [%p] %d\n",&maior,maior);

    troca(&menor,&maior);
    puts("\n--Após a Troca--");
    printf("Maior valor: [%p] %d\n",&menor,menor);
    printf("Menor Valor: [%p] %d",&maior,maior);

    return 0;
}