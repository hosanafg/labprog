/*Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atrav ́es da seguinte f ́ormula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7*/

#include <stdio.h>

int main() {
    int sexo,ideal;
    float peso,altura;

    printf("Qual o seu sexo? Digite 1 para FEMININO e 2 para MASCULINO:  ");
    scanf("%d",&sexo);

    printf("Qual a sua altura:  ");
    scanf("%f",&altura);

    switch(sexo){
        case 1:
            ideal=(62.1*altura)-44.7;
            break;
        case 2:
            ideal=(72.7*altura)-58;
            break;
    } printf("O seu peso ideal é: %.2f",(float)ideal);
    return 0;
}