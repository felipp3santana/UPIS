#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tadLista.h"

// ===== Opções do menu ========================================================
typedef enum {CADASTRAR=1,EXCLUIR,PESQUISAR,LISTARING,LISTARPORT,SAIR} OpcoesDeMenu;

// ===== Cabeçalhos das Funções ================================================
void listarVerbetes(Lista* l);
void listarVerbetesPort(Lista* l);
void cabecalho();
void menu();

// ===== Programa Principal ====================================================
int main(int argc, char *argv[])
{
    Lista listVerb,aux;
    Verbete verbete;
    int codErro;
    OpcoesDeMenu op = 0;
    char controle;
    criaLista(&listVerb);
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
                     printf( "\t           ::: Cadastrar Verbete ::: \n\n" );
                     if (cheiaLista(&listVerb)){
                         printf("     Cadastro cheio!!!\n\n");
                         system("pause");
                         controle = 'N';
                     }
                     else {
                         char palavraPort[41];
                         char palavraIngl[41];
                         fflush(stdin);
                         printf("  Palavra em ingles .......: ");
                         gets(palavraIngl);
                         fflush(stdin);
                         printf("  Traducao em portugues .......: ");
                         gets(palavraPort);
                         fflush(stdin);
                         inicializa(&verbete, palavraIngl, palavraPort);
                         codErro = insereLista (verbete, &listVerb);
                         if (codErro != 0)
                             printf("     Cadastro cheio!\n\n");
                         else
                              printf("     Verbete incluido com sucesso!\n\n");
                         printf("\n   Deseja cadastrar outro Verbete? (S/N) ");
                         controle = getch();
                         fflush(stdin);
                    }
                 } while(controle == 'S' || controle == 's');
				 break;
			case EXCLUIR :
                  do {
                     cabecalho();
                      printf( "\t             ::: Excluir Verbete :::\n\n" );
                      if (vaziaLista(&listVerb)) {
                          printf("     Cadastro vazio!!!\n\n");
                          system("pause");
                          controle = 'N';
                      }
                      else {
                         printf("\n   Informe o Verbete em ingles a excluir: ");
                         gets(verbete.ingles);
                         codErro = excluiLista (verbete, &listVerb);
                         if (codErro != 0)
                             printf("     Verbete nao encontrado!!!\n\n");
                         else
                              printf("     Verbete excluido com sucesso!\n\n");
                         printf("\n\n   Deseja excluir outro verbete? (S/N) ");
                         controle = getch();
                         fflush(stdin);
                     }
                 } while(controle == 'S' || controle == 's');
                 break;
            case PESQUISAR :
                 do {
                     cabecalho();
                     printf( "\t           ::: Consultar Verbete :::\n\n" );
                     if (vaziaLista(&listVerb)) {
                         printf("     Cadastro vazio!!!\n\n");
                         system("pause");
                         controle = 'N';
                     }
                     else {
                         printf("\n   Informe o Verbete em ingles para consultar: ");
                         gets(verbete.ingles);
                         int pos = buscaLista(verbete, &listVerb);
                         if (pos == -1)
                              printf("\n   Verbete nao existente na lista!!!");
                         else
                              traduzInglesPortugues(listVerb.dicionario[pos]);
                         printf("\n\n   Deseja consultar outro Verbete? (S/N) ");
                         controle = getch();
                         fflush(stdin);
                       }
                 } while(controle == 'S' || controle == 's');
                 break;
            case LISTARING :
                 cabecalho();
                 if(vaziaLista(&listVerb))
                       printf("     Cadastro vazio!!!\n\n");
                 else
                      aux = ordenaIngles(listVerb);
                      listarVerbetes(&aux);
                 system("pause");
				 break;
            case LISTARPORT :
                 cabecalho();
                 if(vaziaLista(&listVerb))
                       printf("     Cadastro vazio!!!\n\n");
                 else
                      aux = ordenaPort(listVerb);
                      listarVerbetesPort(&aux);
                 system("pause");
				 break;
            case SAIR: break;
            default: printf("     Opcao invalida!!!\n\n");  system("pause");
		}
	}
    return 0;
}   /* fim de main */

void listarVerbetes(Lista* l)
{
    int i;
    printf("\t              ::: VERBETES ING-PORT  :::\n\n");
    for (i = 0; i < l->tamanho; i++)
        traduzInglesPortugues(l->dicionario[i]);
    printf("\n\n");
}

void listarVerbetesPort(Lista* l)
{
    int i;
    printf("\t              ::: VERBETES PORT-ING  :::\n\n");
    for (i = 0; i < l->tamanho; i++)
        traduzPortuguesIngles(l->dicionario[i]);
    printf("\n\n");
}

void cabecalho ()
{
     system ("cls");
     printf("\n                        UPIS - Sistemas de Informacao \n");
     printf(" ED - Estrutura de Dados                               Prof. Vicente Teixeira\n");
     printf(" ----------------------------------------------------------------------------\n");
     printf("                               ::: DICIONARIO :::       \n");
     printf(" ----------------------------------------------------------------------------\n\n");
}

void menu() {
     cabecalho();
     printf( "\t                         ::: Menu :::\n\n" );
     printf( "\t                      [%d] - Cadastrar\n",CADASTRAR);
     printf( "\t                      [%d] - Excluir\n" , EXCLUIR);
     printf( "\t                      [%d] - Consultar\n" , PESQUISAR);
     printf( "\t                      [%d] - Listar Ing-Port\n" ,  LISTARING);
     printf( "\t                      [%d] - Listar Port-Ing\n" ,  LISTARPORT);
     printf( "\t                      [%d] - Sair\n\n",   SAIR );
     printf( "                                               Digite sua opcao: " );
}    /* fim de menu */
