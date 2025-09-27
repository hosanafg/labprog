/*10. Elabore um programa que apresente os quadrados dos n ́umeros inteiros m ́ultiplos de 4 existentes na
faixa de valores de 15 a 90.*/

#include <stdio.h>
#define inicio 15
#define fim 90

int main () {
    for (int i=inicio;i<=fim;i++) {
        if (i%4==0) printf("%d\n",i);
    } 
    return 0;
}