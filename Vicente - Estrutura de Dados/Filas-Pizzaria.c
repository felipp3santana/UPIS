#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "TAD-Fila-ArranjoCirc.h"

void cabecalho ();
void linhaMenu ();
void imprimeTela (Fila *fila, Fila *prior, Elemento atendido);
void trataErro (int codErro);

/*==================================================================
              Função Main
 Condição de Erro = 10 - Fila vazia
 Condição de Erro = 20 - Fila cheia
 Condição de Erro = 99 - Opção inválida
==================================================================*/

int main(void)
{
	int codErro,fullPrior=0;
	char opcao;
	int i;
	Elemento elemento, emAtendimento;
	Fila fila, filaPrior;

    iniciaFila(&fila);
    iniciaFila(&filaPrior);

    codErro = 10;  // Fila Vazia

    strcpy(emAtendimento.nomeObjeto, "");
    strcpy(emAtendimento.endereco, "");
    emAtendimento.tipoPizza = 0;

    do
    {
       cabecalho();
       imprimeTela(&fila, &filaPrior, emAtendimento);

       trataErro (codErro);
       linhaMenu();
       opcao = getch();
       codErro = 0;
       switch (opcao)
       {
            case '1':  case 'e': case 'E':
            {
                printf ("\n\nAtendimento prioritario?[S/N]: ");
                fflush(stdin);
                scanf("%c", &elemento.pref);
                elemento.pref = toupper(elemento.pref);
                if ((elemento.pref != 'N') && (elemento.pref != 'S')){
                    codErro = 99;
                    break;
                    }

                if(elemento.pref == 'N'){
                    if (isFull(&fila))
                    {
                        codErro = 20;
                        break;
                    }
                }
                if(elemento.pref == 'S'){
                   if (fullPrior == 3){
                        codErro = 20;
                        break;
                   }
                }

                printf ("Informe o nome da pessoa chegando na fila: ");
                fflush(stdin);
                gets(elemento.nomeObjeto);
                printf ("Informe o endereco da pessoa: ");
                fflush(stdin);
                gets(elemento.endereco);
                printf("\n===============\n1. Mussarela\n2. Presunto\n3. Calabresa\n4. Peito de frango\n5. Portuguesa\n===============\n\n");
                printf ("Informe o tipo de pizza: ");
                scanf("%d", &elemento.tipoPizza);

                if (elemento.pref == 'N')
                    codErro = enqueue(elemento, &fila);
                if (elemento.pref == 'S'){
                    codErro = enqueue(elemento, &filaPrior);
                    fullPrior++;
                }
                break;

            }
            case '2': case 'd': case 'D':
            {
                codErro = dequeue(&emAtendimento, &fila);
                break;
            }
            case '3': case 'g': case 'G':
            {
                codErro = dequeue(&emAtendimento, &filaPrior);
                fullPrior--;
                break;
            }
            case '4':  case 'f':  case 'F':  break;
            default: codErro = 99;  // Opção inválida!
       }
    }
    while ((opcao != '4') && (opcao != 'f') && (opcao != 'F'));
    printf ("\n\n\n     Programa encerrando!!! Obrigado \n     Aperte qualquer tecla...\n\n");
    return 0;
} /*  main */

/*==============================================================================*/
void cabecalho ()
{
     system("cls");
     printf("\n                        UPIS - Sistemas de Informacao \n");
     printf(" ED - Estrutura de Dados                               Prof. Vicente Teixeira\n");
     printf("\t\t                       P A. 5     \n");
     printf("\t                  F I L A S  -  P I Z Z A R I A  \n");
     printf(" ----------------------------------------------------------------------------\n\n");
} /*  cabecalho  */

/*==============================================================================*/
void linhaMenu()
{
  printf("\n 1=Enfileirar | 2=Desenfileirar | 3=Desenfileirar Prioritario | 4=Finalizar programa\n");
  printf("\n                 Escolha a opcao: ");
} /*  linhaMenu  */

/*==============================================================================*/
void imprimeTela (Fila *fila, Fila *prior, Elemento atendido)
{
   int i,j;
   cabecalho();
   printf(" PEDIDO EM PREPARO: %s\n ENDERECO: %s\n TIPO PIZZA: %d\n\n", atendido.nomeObjeto, atendido.endereco, atendido.tipoPizza);
   for (i = 0; i<MAX; i++)
   {
       printf("   |---------------------------|\n");
       if (strcmp(fila->dados[i].nomeObjeto, "") != 0)
           printf(" %d | %25s | ", i, fila->dados[i].nomeObjeto);
       else
           printf(" %d |                           | ", i);
       if (fila->inicio == i && fila->fim == i)
          printf(" <-- Inicio/Fim \n");
       else if (fila->inicio == i)
          printf(" <-- Inicio \n");
       else if (fila->fim == i)
          printf(" <-- Fim \n");
       else
          printf(" \n");

   }
   printf("   |---------------------------|\n");

   printf("\n   =====|FILA PRIORITARIA|=====\n\t |====MAX. 3====|\n");
   for (j = 0; j<MAX; j++)
   {
       printf("   |---------------------------|\n");
       if (strcmp(prior->dados[j].nomeObjeto, "") != 0)
           printf(" %d | %25s | ", j, prior->dados[j].nomeObjeto);
       else
           printf(" %d |                           | ", j);
       if (prior->inicio == j && prior->fim == j)
          printf(" <-- Inicio/Fim \n");
       else if (prior->inicio == j)
          printf(" <-- Inicio \n");
       else if (prior->fim == j)
          printf(" <-- Fim \n");
       else
          printf(" \n");
   }
   printf("   |---------------------------|\n");
}
/*==============================================================================*/
void trataErro (int codErro)
{
    switch (codErro)
    {
       case 10: printf("\n             Fila Vazia! \n"); break;
       case 20: printf("\n             Fila Cheia! \n"); break;
       case 99: printf("\n             Erro: Opcao Invalida! \n"); break;
       default: printf("\n             Processamento realizado com sucesso!!! \n");
    }
}
/*==============================================================================*/

