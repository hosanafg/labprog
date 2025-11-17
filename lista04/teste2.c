#include <stdio.h>
void somar10 (int *x) {
    *x=*x+10;
}
int main () {
	int numero;
	puts("Digite um número: ");
	scanf("%d",&numero);
	somar10(&numero);
	printf("Resultado da soma: %d",numero);
	return 0;
}