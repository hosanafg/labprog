/*23. Escreva um programa que mostre a diferen ̧ca entre pr ́e-incrementar e pos-incrementar 
usando o operador –.*/

#include <stdio.h>
int main () {
    int a=5, b=a++,c=++a; 
    printf("a: %d, b: %d\n", a, b);
    printf("a: %d, c: %d\n", a, c);
    return 0;
}