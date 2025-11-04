/*26. Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).*/

#include <stdio.h>
#include <math.h>

int main () {
    float a,b,c,ma,mg;
    printf ("Digite três números para calcular as médias:  ");
    scanf("%f %f %f",&a,&b,&c);

    ma=(a+b+c)/3;
    mg=(pow(a*b*c,1.0/3));

    printf("M.A (%.2f, %.2f, %.2f) = %.2f",a,b,c,ma);
    printf("\nM.G (%.2f, %.2f, %.2f) = %.2f",a,b,c,mg);

    return 0;
}