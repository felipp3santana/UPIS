#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "TadPilha.h"

void cabecalho();
void linhaMenu();
void imprimePilha(Pilha *pilha, int *numDec);
int convert(int *decDiv);

//===== Main
int main(void)
{
	Dados objt;
	Pilha pilha;
	int i, num, decimal;
	char opcao;

    do
    {
       newStack(&pilha);
       cabecalho();
       linhaMenu();
       opcao = getch();
       switch (opcao)
       {
            case '1':  case 'e': case 'E':
            {
                    printf ("\n\n    Informe o numero que deseja converter (decimal -> binario): ");
                    fflush(stdin);
                    scanf("%d", &num);
                    decimal = num;
                    do
                    {
                        objt.numBinario  = convert(&num);
                        push(objt, &pilha);
                    }
                        while (num/2!=0);

                        if ((num!=0)&&(num/2==0)){
                            objt.numBinario = 1;
                            push(objt, &pilha);
                        }

                        printf("\n");

                    imprimePilha(&pilha,&decimal);
            }
            case '2':
                break;  // Encerra execução
       }
    }
    while (opcao != '2');
    printf ("\n\n\n     Programa encerrando!!! Obrigado \n     Aperte qualquer tecla... \n \n");
    getch();
    return 0;
}


//===== Opções
void linhaMenu()
{
  printf("\n\t1= Converter numero decimal para binario | 2= Finalizar programa\n");
  printf("\n\t\t\tEscolha a opcao: ");
}

//===== Imprime Pilha
void imprimePilha (Pilha *pilha, int *numDec)
{
   Dados *vetor;
   int i;

   cabecalho();
   vetor = getStack(pilha);
   i = 0;
   printf("\n\t\t==========================================\n\t\t    O numero %d em binario = ", *numDec);
   while (i < pilha->topo)
   {
 	   printf("%d", vetor[i].numBinario);
       i++;
   }
   printf("\n\t\t==========================================\n\n");
   system("pause");
}

//==== Conversor
int convert(int *decDiv){
int result;
    result = *decDiv % 2;
    *decDiv = *decDiv/2;
return result;
}

//==== Menu
void cabecalho(){
   system("cls");
   printf("\nUPIS - ESTRUTURA DE DADOS                            ALUNO : FELIPPE DE ALMEDA SANTANA\n");
   printf("                      CONVERTER DECIMAL PARA BINARIO       \n");
}
