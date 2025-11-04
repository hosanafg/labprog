/*15. Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7.*/

#include <stdio.h>
#include <math.h>
#define min 0
#define max 7

int main () {
    int a=3,resp=1;
    for (int i=min;i<=max;i++){
        resp=pow(a,i);
        printf("%d ^ %d = %d\n",a,i,resp);
    }
    return 0;
}