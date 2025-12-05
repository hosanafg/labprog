/*16. Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 
pertencentes ao intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis 
por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.*/

#include <stdio.h>
#define inicio 0
#define fim1 100
#define fim2 200

int main () {
    int soma3=0,soma5=0,total=0;

    for (int i=inicio;i<=fim2;i++) {
        if (i<=fim1 && i%3==0) {
            soma3+=i;
        } if (i>fim1 && i%5==0)
            soma5+=i;   
    } total=soma3+soma5;

    printf("Somatório entre múltiplos de 3 entre 0 e 100 = %d\n",soma3);
    printf("Somatório entre múltiplos de 5 entre 101 e 200 = %d\n",soma5);
    printf ("Somatório total %d\n",total);
    
    return 0;
}