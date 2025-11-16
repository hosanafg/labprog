/*3. Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor
valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.*/

#define TAM 5
#include <stdio.h>
void popular_vetor (int lista[],int *num, const char *msg) {
    int contador=0;

    puts (msg);
    scanf ("%d", num);
    lista[0] = *num;
    int menor=lista[0];

    printf("O menor número atual é %d\n", menor);       
        for (int i=1;i<TAM;i++) {
            printf("Digite o %dº número restante: ", i+1);
            scanf ("%d", num);
            
            lista[i]=*num;
            contador+=1;
            if (lista [i] >=50) break;
            if (menor > lista[i]) menor = lista [i];
            printf("O menor número atual é %d\n",menor);
            
    } puts ("Vetor preenchido:  ");  
    for (int i=0;i<contador;i++) {
        printf("%d ",lista[i]);
    }
}

int main () {
    int vetor[TAM];
    int n;
    popular_vetor (vetor,&n,"Digite um numero:  ");

    return 0;
}