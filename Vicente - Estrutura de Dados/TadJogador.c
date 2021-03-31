#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct jogador {
    char nome[21];
    int qtGols;
    int qtAssist;
} Jogador;


void inicializa(Jogador* j, char * n, int g, int a)
{
    strcpy(j->nome, n);
    j->qtGols = g;
    j->qtAssist = a;
}
void atualizaGols(Jogador* j, int g)
{
    j->qtGols = g;
}
void atualizaAssist(Jogador* j, int a)
{
    j->qtAssist = a;
}
int ehBom(Jogador j)
{
    return(j.qtGols > 0 && j.qtAssist > 0 && j.qtGols + j.qtAssist >= 5);
}
int imprime(Jogador j)
{
    printf("\nJogador: %s \n\t- qtde gols: %d \n\t- qtde assistencias: %d \n\t- avaliacao: ",
            j.nome, j.qtGols, j.qtAssist);
    if(ehBom(j))
        printf("bom jogador.");
    else
        printf("jogador mediano.");
}
