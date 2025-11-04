/*11. Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.*/

#include <stdio.h> 
#include <math.h>

int main() {
    float a,b,p,s,d,r;
    printf("Digite os dois números:  ");
    scanf("%f%f",&a,&b);

    p=a*b;
    s=a+b;
    d=a-b;
    r=fmod(a,b);

    printf("%.2f x %.2f = %.2f\n",a,b,p);
    printf("%.2f + %.2f = %.2f\n",a,b,s);
    printf("%.2f - %.2f = %.2f\n",a,b,d);
    printf("Resto da divisão: %.2f / %.2f = %.2f\n",a,b,r);

    return 0;
}