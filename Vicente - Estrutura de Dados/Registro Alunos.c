#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX_CAD 10

// ===== Opções do menu =================================================
typedef enum
{
    INCLUIR = 1, EXCLUIR, LISTAR, SAIR
}OpcoesDeMenu;

//=========== Estrutura =================================================
typedef struct aln
{
    char nome[30];
    int matricula;
    float nota;
}Aluno;

// ===== Cabeçalhos das Funções ==========================================
void cabecalho();
void menu();
void incluirAlunos(Aluno r[], int *t);
void excluirAlunos(Aluno r[], int *t);
void listarAlunos(Aluno r[], int t);

// ===== Programa Principal =============================================
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    Aluno alunos[MAX_CAD];
    int tam = 0;
    OpcoesDeMenu op;
    do
    {
        menu();
        scanf("%d", &op);
        fflush(stdin);
        switch(op)
        {
            case INCLUIR:
                incluirAlunos(alunos, &tam);
                break;
            case EXCLUIR:
                excluirAlunos(alunos, &tam);
                break;
            case LISTAR :
                listarAlunos(alunos, tam);
                break;
            case SAIR:
                break;
            default:
                printf("Operação inválida");
        }
    }
    while(op != SAIR);
    return 0;
}

// ==== Incluir ================================================
void incluirAlunos(Aluno r[], int *t)
{
    cabecalho();
    printf( "\t\t ::Incluir Aluno::\n\n" );
    if(*t == MAX_CAD)
    {
        printf("\n Cadastro cheio!\n\n");
        system("pause");
        return;
    }
    printf("  Nome do aluno.........: ");
        fflush(stdin);
        gets(r[*t].nome);
    printf("  Matricula.............: ");
        fflush(stdin);
        scanf("%d", &r[*t].matricula);
    printf("  Nota..................: ");
        fflush(stdin);
        scanf("%f", &r[*t].nota);
    *t = *t + 1;
    printf("\n\t :::Aluno incluido com sucesso!\n\n");
    system("pause");
}

// ==== Excluir ================================================
void excluirAlunos(Aluno r[], int *t)
{
    cabecalho();
    printf( "\t\t ::Excluir Aluno::\n\n" );
    if(*t == 0)
    {
        printf("\n Cadastro vazio!\n\n"); system("pause");
        return;
    }
    char nomeExcl[30];
    printf("  Nome do aluno a excluir: ");
        fflush(stdin);
        gets(nomeExcl);
    int pos = 0, k;
    while((pos < *t) && (strcmp(r[pos].nome, nomeExcl)!= 0))
        pos++;
    if (pos >= *t)
    {
       printf("\n Aluno não encontrado!!!\n\n");
       system("pause");
       return;
    }
    for (k = pos; k < *t - 1; k++)
        r[k] = r[k+1];
    *t = *t - 1;
    printf("\n\t :::Aluno excluido com sucesso!\n\n");
    system("pause");
}

// ==== Listar ================================================
void listarAlunos(Aluno r[], int t)
{
    int i;
    cabecalho();
    printf("\t\t\t :: Lista de Alunos cadastrados ::\n\n");
    if(t == 0)
    {
        printf("\n Cadastro vazio!\n\n");
        system("pause");
        return;
    }
    printf("\t\t          NOME ALUNO                MATRICULA           NOTA\n");
    printf("\t\t          ----------                ---------           ----\n\n");
    for (i = 0; i < t; i++)
        printf("    %31s\t       %10d               %2.1f \n\n", r[i].nome, r[i].matricula, r[i].nota);
    system("pause");
}

// ===== Cabeçalho =============================================
void cabecalho()
{
     system("cls");
     printf("\n                         UPIS - Sistemas de Informacao \n");
     printf(" ED - Estruturas de Dados\t              Prof. Vicente Teixeira\n");
     printf("\t                                      Aluno. Felippe de Almeida Santana\n");
     printf(" ------------------------------------------------------------------------------\n");
     printf("\t                 Cadastro de Alunos                            \n");
     printf(" ------------------------------------------------------------------------------\n\n");
}

// ===== Menu =============================================
void menu()
{
     cabecalho();
     printf( "\t                           :: Menu ::\n\n" );
     printf( "\t                        [%d] - Incluir\n" , INCLUIR);
     printf( "\t                        [%d] - Excluir\n" , EXCLUIR);
     printf( "\t                        [%d] - Listar \n" , LISTAR);
     printf( "\t                        [%d] - Sair\n\n", SAIR );
     printf( "                                               Digite sua opção: " );
}
