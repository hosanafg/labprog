/*5. Crie uma Estrutura disciplina em que um dos campos corresponde tamb ́em a uma estrutura pro-
fessor.*/

#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
    char *disciplina;
} Professor;

typedef struct {
    float nota1,nota2;
    float media;
    Professor *nomeprofessor;
} Aluno;

void lerinfosAluno (Aluno *pAluno);
void lerinfosProfessor (Professor *pProfessor);

int main () {
    Aluno aln;
    Professor prof;

}

void lerinfosAluno (Aluno *pAluno) {

}

void lerinfosProfessor (Professor *pProfessor) {

}