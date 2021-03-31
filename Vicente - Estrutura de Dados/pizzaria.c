#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "arranjoCirc.h"

void cabecalho();
void linhaMenu();
void pedido(Elemento *p);
void imprimeFila (Fila *fila);

//==== Main
void main()
{
	Elemento info,order;
	Fila fila;
	int i;
	char opcao;

	do
    {
       iniciaFila(&fila);
       cabecalho();
       linhaMenu();
       opcao = getch();

       switch (opcao){
            case '1':
            {
                pedido(&info);
                enqueue(info,&fila);
            }
             case '3':
            {
                imprimeFila(&fila);
            }
       }
    }
    while (opcao != '4');

}

//===== Imprime Fila
void imprimeFila (Fila *fila)
{
   int i;
   cabecalho();
   i = 0;
   printf("\n\t\t =========    Pedidos em ordem de chegada  ============ ");
   while (i < fila->fim)
   {
 	   printf("\n\t\t%s", fila->dados[i].nome);
       i++;
   }
   printf("\n\t\t========================================================\n\n");
   system("pause");
}

//==== Opçoes
void linhaMenu()
{
  printf("\n1= Adicionar pedido | 2= Adicionar pedido prioritario | 3= Mostrar Pedidos | 4= Finalizar programa\n");
  printf("\n\t\t\tEscolha a opcao: ");
}

//==== Cabecalho
void cabecalho(){
system("cls");
printf("\nUPIS - ESTRUTURA DE DADOS                            ALUNO : FELIPPE DE ALMEIDA SANTANA\n");
printf("\t                      P I Z Z A R I A        \n");
printf("\t          L I S T A     D E     P E D I D O S    \n\n");
}

//==== Pedido
void pedido(Elemento *p){
cabecalho();
    printf ("\n\n    Informe o nome do cliente: ");
        gets(p->nome);
return p;
}
