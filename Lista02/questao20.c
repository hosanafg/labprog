/*20. Construir um programa que apresente como resultado o fatorial dos valores  ́
ımpares situados na faixa numero de 1 a 10.*/

#include <stdio.h> 
#define INICIO 1
#define FIM 10
int main () {
    long int fat=1;

    for (int i=INICIO;i<=FIM;i++){
        fat*=i;
        if (i%2)
            printf ("Fatorial de %d = %lu\n",i,fat);
    } return 0;
}