/*Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do
usu ́ario, e sua m ́edia.*/

#include <stdio.h>

typedef struct {
    float nota1,nota2;
    float media;
} Aluno;

void lerNotaAluno (Aluno *pAluno);

int main () {
    
    Aluno aluno;
    lerNotaAluno(&aluno);
    printf("Nota 1: %.2f\nNota 2: %.2f\nMédia: %.2f", aluno.nota1,aluno.nota2,aluno.media);

    //if(aluno.media>=7) puts ("\nO aluno foi aprovado!");
    //else puts ("\nO aluno foi reprovado");
    return 0;
}

void lerNotaAluno(Aluno *pAluno) {
    
    puts("Digite a primeira nota:  ");
    scanf("%f", &(pAluno->nota1));
    printf("Digite a segunda nota: ");
    scanf("%f", &(pAluno->nota2));
    
    pAluno->media=(pAluno->nota1 + pAluno->nota2)/2;
}