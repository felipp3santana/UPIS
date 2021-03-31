#include <stdio.h>

typedef struct aluno {
    char nome[40];
    float pr1;
    float pr2;
    float trab;
    int faltas;
}Aluno;

void imprimeAluno(Aluno a);
Aluno carrega( );

main() {
    Aluno joao, maria;
    joao = carrega( );
    maria = carrega( );
    imprimeAluno(joao);
    imprimeAluno(maria);
    printf("\n");
}
void imprimeAluno(Aluno a){
    printf("\nAluno %s, prova1=%.1f, prova2=%.1f, trabalho=%.1f, faltas=%d.", a.nome, a.pr1, a.pr2, a.trab, a.faltas);
}

Aluno carrega( ){
    Aluno a;
    printf("Informe o nome do aluno: ");
    gets(a.nome);
    printf("Nota prova1: ");
    scanf("%f",&a.pr1);
    fflush(stdin);
    printf("Nota prova2: ");
    scanf("%f",&a.pr2);
    fflush(stdin);
    printf("Nota trabalho: ");
    scanf("%f",&a.trab);
    fflush(stdin);
    printf("Faltas: ");
    scanf("%d",&a.faltas);
    fflush(stdin);
    printf("\n");
    return a;
}
