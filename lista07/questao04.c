/*4. Escreva um programa em C que modifique a Quest ̃ao 1 para conter um array com 3 alunos. Escreva
uma fun ̧c ̃ao para calcular a m ́edia dos alunos.*/

#include <stdio.h>
#define NUM_ALUNOS 3

typedef struct {
    float nota1,nota2;
    float media;
} infosAluno;

void lerNotaAluno (infosAluno *pAluno);
float mediaIndividual(infosAluno *pAluno);
void calcularMediaGeral(infosAluno alunos[], float *pMediaGeral);
void imprimirResultados(infosAluno alunos[], float mediaGeral) ;

int main () {
    
    infosAluno turma[NUM_ALUNOS];
    float mediageral;

    for (int i=0;i<NUM_ALUNOS;i++) {
        printf("ALUNO %d:\n",i+1);
        lerNotaAluno(&turma[i]);
        turma[i].media = mediaIndividual(&turma[i]);
    }
    calcularMediaGeral(turma, &mediageral);
    imprimirResultados(turma, mediageral);

    return 0;
}

void lerNotaAluno (infosAluno *pAluno) {
    puts("Digite a primeira nota:  ");
    if(scanf("%f", &(pAluno->nota1))!=1) {
        puts("Erro na leitura da Nota 1.");
        return;
    }

    puts("Digite a segunda nota: ");
    if(scanf("%f", &(pAluno->nota2))!=1) {
        puts("Erro na leitura da Nota 2.");
        return;
    } 
}

float mediaIndividual(infosAluno *pAluno) {
    return (pAluno->nota1 + pAluno->nota2) / 2.0f;
}

void calcularMediaGeral(infosAluno alunos[], float *pMediaGeral) {
    float somaDasMedias = 0.0f;
    for (int i=0; i<NUM_ALUNOS; i++) {
        somaDasMedias += alunos[i].media;
    }
    *pMediaGeral = somaDasMedias / NUM_ALUNOS;
}

void imprimirResultados(infosAluno alunos[], float mediaGeral) {
    printf("Resultados Individuais e Média da Turma\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Notas: %.2f e %.2f\n", alunos[i].nota1, alunos[i].nota2);
        printf("Média Individual: %.2f\n", alunos[i].media);
        if (alunos[i].media >= 7.0f) puts("Status: APROVADO\n");
        else puts("Status: REPROVADO\n");
    } printf("MÉDIA GERAL DA TURMA: %.2f\n", mediaGeral);
}