#include <stdio.h>
#define TAM 15

typedef struct aluno{
    char nome[21];
    float nota;
    }Aluno;
Aluno aluno[TAM],acimaMedia[TAM];

void main(){
int i,concA=0,aprov=0,reprov=0,semRend=0,cont=0;
float maiorNota, media=0;

    for(i=0;i<TAM;i++)
        {
        printf("Informe o nome do aluno: ");
        scanf("%s", &aluno[i].nome);
        fflush(stdin);
        printf("Informe a nota do aluno: ");
        scanf("%f", &aluno[i].nota);
        fflush(stdin);

        media += aluno[i].nota;
        printf("\n");

        if(aluno[i].nota >= 9)
            concA++;
        if(aluno[i].nota >= 5)
            {
            acimaMedia[cont] = aluno[i];
            cont++;
            aprov++;
            }
        if(aluno[i].nota < 5)
            reprov++;
        if(aluno[i].nota == 0)
                semRend++;
        }
    printf("\n==========================\n");
    printf("Media da turma : %.1f\n\nAlunos conceito A: %d\nAlunos Aprovados: %d\nAlunos Reprovados: %d\nAlunos Sem Rendimento: %d", (media/15), concA, aprov, reprov, semRend);
    printf("\n==========================");

    printf("\n\n============================\nAlunos acima da media:\n\n");
    for(i=0;i<cont;i++)
        printf("Nome : %s    Nota: %.1f\n", acimaMedia[i].nome,acimaMedia[i].nota);
    printf("============================\n\n");
}
