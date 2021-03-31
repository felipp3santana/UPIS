#include "TAD-ListaDupla.h"

//  PROTÓTIPOS DAS FUNÇÕES DA APLICAÇÃO
void cabecalho ();
void menu ();
void consultas(Lista *lista);

//==============================================================================
int main()
{
	Lista lista;
	Livro livro;
	char op, continua;
    criaLista(&lista);
    do  // while
    {
       cabecalho();
       menu();
       op = getch();
       switch (op)
       {
            case '1': case 'i':  case 'I': // INSERIR LIVRO
            {
                do
                {
                    cabecalho();
                    printf("            I N S E R I R    L I V R O \n");
                    printf("\n\t= Informe o titulo do Livro....: ");
                    fflush(stdin);
                    gets(livro.titulo);
                    printf("\t= Informe o nome do Autor.....: ");
                    fflush(stdin);
                    gets(livro.nomeAutor);
                    printf("\t= Informe o nome da Editora.....: ");
                    fflush(stdin);
                    gets(livro.nomeEditora);
                    printf("\t= Informe o Ano de publicacao.....: ");
                    fflush(stdin);
                    scanf("%d", &livro.ano);
                    livro.control = 0;
                    insereFinal(livro, &lista);
                    printf("\n\t   Processamento realizado com sucesso!!! \n");
                    printf("\n\t   Deseja cadastrar outro Livro? (S/N) ");
                    continua = getch();
                } while ((continua == 's') || (continua == 'S'));
                break;
            }
            case '2': case 'e':  case 'E': // EXCLUIR LIVRO
            {
                do
                {
                    cabecalho();
                    printf("            E X C L U I R     L I V R O \n");
                    printf("\n\t= Informe o titulo do livro que deseja excluir: ");
                    fflush(stdin);
                    gets(livro.titulo);
                    int erro = excluiLista(livro, &lista);
                    if (erro != 0)
                        printf("\n\t   Livro nao existente no cadastro!!! \n");
                    else
                        printf("\n\t   Processamento realizado com sucesso!!! \n");
                    printf ("\n      Deseja excluir outro livro? (S/N) ");
                    continua = getch();
                } while ((continua == 's') || (continua == 'S'));
                break;
            }
            case '3':  case 'a':  case 'A':   // CONSULTAS
            {
                if (vazia(&lista)) {
                    printf("\n\t  Lista Vazia!!! \n");
                    printf("\n\t\t  Aperte qualquer tecla... \n \n");
                    getch();
                }
                else
                    consultas(&lista);
                break;
            }
            case '0':  case 'f':  case 'F':
            {
                printf ("\n\n    Programa ENCERRANDO ... Obrigado!!! \n\n");
                break;
            }
            default:
            {
                printf("\n\t   Opcao invalida!!! \n");
                printf ("\t\tAperte qualquer tecla... \n \n");
                getch();
            }
       }  //switch
    } while ((op != '0')&&(op != 'f')&&(op != 'F'));
    return 0;
}  // fim função MAIN
//==============================================================================
//  função CABECALHO: apresenta o cabeçalho das telas da aplicação
//==============================================================================
void cabecalho ()
{
//     clrscr();
     system("cls");
     printf("\n  UPIS - Sistemas de Informacao                       ED - Estrutura de Dados\n");
     printf("         Prof. Vicente Teixeira                            2.Semestre/2020   \n");
     printf(" |===========================================================================|\n");
     printf(" |                     PROJETO 2 BIMESTRE  ==  BIBLIOTECA                    |\n");
     printf(" |                  C A D A S T R O     D E      L I V R O S                 |\n");
     printf(" |===========================================================================|\n");
} /* fim função cabecalho  */
//==============================================================================
//  função MENU: apresenta o menu principal da aplicação
//==============================================================================
void menu ()
{
     cabecalho();
     printf("\n\t         | = = = = = = = = MENU  PRINCIPAL = = = = = = = = = |");
     printf("\n\t         |             1 - Incluir livros                    |");
     printf("\n\t         |             2 - Excluir livros                    |");
     printf("\n\t         |             3 - Consultas                         |");
     printf("\n\t         |             0 - Finalizar programa                |");
     printf("\n\t         | = = = = = = = = = = = = = = = = = = = = = = = = = |\n\n");
     printf("\n\t                           Escolha uma opcao: ");
}   // fim função menu
//==============================================================================
//  função menuConsulta: apresenta o menu de consultas da aplicação
//==============================================================================
void menuConsultas()
{
     cabecalho();
     printf("\n\t         | = = = = = = = = = = CONSULTAS = = = = = = = = = = | ");
     printf("\n\t         |              1 - Consultar por Titulo             | ");
     printf("\n\t         |              2 - Consultar por Autor              | ");
     printf("\n\t         |              3 - Listagem geral                   | ");
     printf("\n\t         |              4 - Voltar ao Menu Principal         | ");
     printf("\n\t         | = = = = = = = = = = = = = = = = = = = = = = = = = |\n\n");
     printf("\n\t                            Escolha uma opcao: ");;
}
//==============================================================================
void consultas(Lista *lst)
{
    int op, op1, cont=0;
    Livro p;
    Ponteiro pAux;
    do {
       menuConsultas();
       scanf("%d", &op);
       switch (op){
          case 1:
              do {
                  cabecalho();
                  printf("\n\t = = = = Buscar Livro por Titulo = = = = \n");
                  printf("\n\t = Informe o titulo do livro: ");
                  fflush(stdin);
                  gets(p.titulo);
                  pAux = buscaLista(p, lst);
                  if (pAux == NULL)
                     printf("\n\t  Livro %s nao encontrado...\n ", p.titulo);
                  else{
                     printf("\n\t  Titulo do Livro:  %s", pAux->elemento.titulo);
                     printf("\t Autor do livro:  %s", pAux->elemento.nomeAutor);
                     printf("\t Editora:  %s", pAux->elemento.nomeEditora);
                     printf("\t Ano:  %d\n", pAux->elemento.ano);
                  }
                  printf("\n   Digite:  0  [para voltar ao menu Consultas]");
                  printf("\n            1  [para visualizar outro Livro] ");
                  scanf("%d", &op1);
              } while (op1 == 1);
              break;
          case 2:
              do {
                  cabecalho();
                  printf("\n\t = = = = Buscar Livro por Autor = = = = \n");
                  printf("\n\t = Informe o nome do Autor: ");
                  fflush(stdin);
                  gets(p.nomeAutor);
                  pAux = buscaAutor(p, lst, &cont);
                  if ((pAux == NULL)&&(cont==0))
                     printf("\n\t  Autor %s nao encontrado...\n ", p.nomeAutor);
                  printf("\n   Digite:  0  [para voltar ao menu Consultas]");
                  printf("\n            1  [para visualizar outro Livro] ");
                  scanf("%d", &op1);
                } while (op1 == 1);
                break;
          case 3:
              cabecalho();
              printf("\n\t = = = = = = Listagem de Livros = = = = = = \n");
              listagem(lst);
               printf("\n\n\t\t  Aperte qualquer tecla... \n \n");
              getch();
              break;
          case 4:
              return;
              break;
          default:
              printf("\n\t= = = = = = = Opcao invalida = = = = = = = ");
              getch();
              break;
       } //switch
    } while(op != 3);
}   // fim da função consultas
