/*5. Crie uma Estrutura disciplina em que um dos campos corresponde tamb ́em a uma estrutura pro-
fessor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_INPUT_LEN 1000

typedef struct {
    char *nome;
} InfosProfessor;

typedef struct {
    char *nome_disciplina;
    InfosProfessor info_professor;
} Disciplina;

void lerInfosProfessor(InfosProfessor *pProfessor,const char *msg);
void lerInfosDisciplina(Disciplina *pDisciplina, const char *msg);
void liberarMemoria (Disciplina *pDisciplina);

int main () {
    Disciplina cadeira;

    cadeira.info_professor.nome = NULL;
    cadeira.nome_disciplina=NULL;

    lerInfosProfessor(&(cadeira.info_professor), "Digite o nome do professor:  ");
    lerInfosDisciplina(&cadeira,"Digite o nome da disciplina:  ");

    printf("\n--- Dados Cadastrados ---\n");
    printf("Professor: %s\n", cadeira.info_professor.nome);
    printf("Disciplina: %s\n", cadeira.nome_disciplina);
    printf("-------------------------\n");

    liberarMemoria(&cadeira);

    return 0;
}

void lerInfosProfessor(InfosProfessor *pProfessor,const char *msg) {
    char buffer[MAX_INPUT_LEN];
    puts(msg);
    
    if (fgets(buffer, MAX_INPUT_LEN, stdin)==NULL) {
        puts("Erro na leitura.");
        return;
    } 
    
    size_t len = strlen(buffer);
    if (len>0 && buffer[len-1]=='\n') {
        buffer[len-1]='\0'; 
        len--; 
    }
    
    pProfessor->nome = (char *)malloc((len + 1) * sizeof(char));
    
    if (pProfessor->nome == NULL) {
        puts("Erro: Falha na alocação de memória para o nome.");
        exit(EXIT_FAILURE);
    } strcpy(pProfessor->nome, buffer);

}

void lerInfosDisciplina(Disciplina *pDisciplina, const char *msg){
    puts(msg);
    char buffer[MAX_INPUT_LEN];
    
    if(fgets(buffer,MAX_INPUT_LEN,stdin)==NULL) {
        puts("Erro na leitura! ");
        return;
    }
    size_t len=strlen(buffer);
    if(len>0 && buffer[len-1]=='\n') {
        buffer[len-1]='\0';
        len--;
    }
    pDisciplina->nome_disciplina=(char *)malloc((len+1) * sizeof(char));
    strcpy(pDisciplina->nome_disciplina, buffer);
}

void liberarMemoria (Disciplina *pDisciplina) {
    if (pDisciplina!= NULL && pDisciplina->info_professor.nome!= NULL) {
        free(pDisciplina->info_professor.nome);
        pDisciplina->info_professor.nome= NULL;
    }
    if(pDisciplina!=NULL && pDisciplina->nome_disciplina!=NULL) {
        free(pDisciplina->nome_disciplina);
        pDisciplina->nome_disciplina=NULL;
    }
}