/*4. Implementar um programa para resolver o seguinte problema: Jos ́e tem 150 cent ́ımetros e cresce 2
cent ́ımetros por ano. O Pedro tem 110 cent ́ımetros e cresce 3 cent ́ımetros por ano. Em quantos anos
Pedro ser ́a maior que Jose?*/

#include <stdio.h>

int main() {
    int j = 150, p = 110;
    int cj = 2, cp = 3;
    int x;
    
    x = (j - p) / (cp - cj) + 1;

    printf("Pedro sera maior que Jose em %d anos.\n", x);
    printf("Altura de Pedro: %d cm\n", p + cp * x);
    printf("Altura de Jose: %d cm\n", j + cj * x);

    return 0;
}