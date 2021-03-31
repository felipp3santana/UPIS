#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tadLista.h"


// ===== Opções do menu ========================================================
typedef enum {CADASTRAR=1,EXCLUIR,PESQUISAR,LISTAR,SAIR} OpcoesDeMenu;

// ===== Cabeçalhos das Funções ================================================
void listarJogadores(Lista* l);
void cabecalho();
void menu();

// ===== Programa Principal ====================================================
int main(int argc, char *argv[])
{
    Lista selecao;
    Jogador jogador;
    int codErro;
    OpcoesDeMenu op = 0;
    char controle;
    criaLista(&selecao);
    while(op != SAIR )
	{
        menu();
        codErro = 0;
        scanf( "%d", &op);
		fflush( stdin );
		switch (op)
		{
			case CADASTRAR :
                 do {
                     cabecalho();
                     printf( "\t           ::: Cadastrar Jogador ::: \n\n" );
                     if (cheiaLista(&selecao)) {
                         printf("     Cadastro cheio!!!\n\n");
                         system("pause");
                         controle = 'N';
                     }
                     else {
                         char nome[21];
                         int qtG, qtA;
                         fflush(stdin);
                         printf("  Nome do jogador .......: ");
                         gets(nome);
                         fflush(stdin);
                         printf("  Qtde de gols ..........: ");
                         scanf("%d", &qtG);
                         fflush(stdin);
                         printf("  Qtde de assistencias ..: ");
                         scanf("%d", &qtA);
                         inicializa(&jogador, nome, qtG, qtA);
                         codErro = insereLista (jogador, &selecao);
                         if (codErro != 0)
                             printf("     Cadastro cheio!\n\n");
                         else
                              printf("     Jogador incluido com sucesso!\n\n");
                         printf("\n   Deseja cadastrar outro Jogador? (S/N) ");
                         controle = getch();
                         fflush(stdin);
                     }
                 } while(controle == 'S' || controle == 's');
				 break;
            case EXCLUIR :
                  do {
                     cabecalho();
                     printf( "\t             ::: Excluir Jogador :::\n\n" );
                     if (vaziaLista(&selecao)) {
                         printf("     Cadastro vazio!!!\n\n");
                         system("pause");
                         controle = 'N';
                     }
                     else {
                         printf("\n   Informe nome do Jogador a excluir: ");
                         gets(jogador.nome);
                         codErro = excluiLista (jogador, &selecao);
                         if (codErro != 0)
                             printf("     Jogador nao encontrado!!!\n\n");
                         else
                              printf("     Jogador excluido com sucesso!\n\n");
                         printf("\n\n   Deseja excluir outro jogador? (S/N) ");
                         controle = getch();
                         fflush(stdin);
                     }
                 } while(controle == 'S' || controle == 's');
                 break;
            case PESQUISAR :
                 do {
                     cabecalho();
                     printf( "\t           ::: Consultar Jogador :::\n\n" );
                     if (vaziaLista(&selecao)) {
                         printf("     Cadastro vazio!!!\n\n");
                         system("pause");
                         controle = 'N';
                     }
                     else {
                         printf("\n   Informe nome do Jogador para consultar: ");
                         gets(jogador.nome);
                         int pos = buscaLista(jogador, &selecao);
                         if (pos == -1)
                              printf("\n   Jogador nao existente na selecao!!!");
                         else
                              imprime(selecao.colecao[pos]);
                         printf("\n\n   Deseja consultar outro Jogador? (S/N) ");
                         controle = getch();
                         fflush(stdin);
                     }
                 } while(controle == 'S' || controle == 's');
                 break;
            case LISTAR :
                 cabecalho();
                 if(vaziaLista(&selecao))
                       printf("     Cadastro vazio!!!\n\n");
                 else

                      listarJogadores(&selecao);
                 system("pause");
				 break;
            case SAIR: break;
            default: printf("     Opcao invalida!!!\n\n");  system("pause");
		}
	}
    return 0;
}   /* fim de main */

void listarJogadores(Lista* l)
{
    int i;
    printf("\t              ::: SELECAO DE JOGADORES  :::\n\n");
    for (i = 0; i < l->tamanho; i++)
        imprime(l->colecao[i]);
    printf("\n\n");
}

void cabecalho ()
{
     system ("cls");
     printf("\n                        UPIS - Sistemas de Informacao \n");
     printf(" ED - Estrutura de Dados                               Prof. Vicente Teixeira\n");
     printf(" ----------------------------------------------------------------------------\n");
     printf("                         ::: Selecao de Jogadores :::       \n");
     printf(" ----------------------------------------------------------------------------\n\n");
}

void menu() {
     cabecalho();
     printf( "\t                         ::: Menu :::\n\n" );
     printf( "\t                      [%d] - Cadastrar\n",CADASTRAR);
     printf( "\t                      [%d] - Excluir\n" , EXCLUIR);
     printf( "\t                      [%d] - Consultar\n" , PESQUISAR);
     printf( "\t                      [%d] - Listar\n" ,  LISTAR);
     printf( "\t                      [%d] - Sair\n\n",   SAIR );
     printf( "                                               Digite sua opcao: " );
}    /* fim de menu */
