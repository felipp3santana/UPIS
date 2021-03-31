// Autor: Vicente Teixeira

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "tadPilha.h"

void linhaMenu();
int converter(int decimal);
void cabecalho();

int main(void)
{
	Binario resultBin;
	Pilha pilha;
	int i,num;
	char opcao;

    newStack(&pilha);

    system("cls");
    cabecalho();
    do
    {
       linhaMenu();
       opcao = getch();
       switch (opcao)
       {
            case '1':
                {
                    printf ("\n\n    Informe o numero que deseja converter (decimal -> binario): ");
                    fflush(stdin);
                    scanf("%d", &num);
                    do
                     {
                     resultBin.numBinario = converter(num);
                     push(resultBin, &pilha);
                     }
                    while (resultBin.numBinario!=0);
                    printf("\n\nO numero decimal convertido para binario = ");
                    pop(&pilha, &resultBin);
                    break;
                }
                break;
            case '2':  break;  // Encerra execuçao
       }
    }
    while (opcao != '2');
    printf ("\n\n\n     Programa encerrando!!! Obrigado \n     Aperte qualquer tecla... \n \n");
    getch();
    return 0;
} /*  main */

int converter(int decimal)
{
int result;
    if (decimal/2 != 0)
        result = decimal%2;
    else
        return 0;
return result;
}

void linhaMenu()
{
  printf("\n\t1= Converter decimal para binario | 2= Finalizar programa\n");
  printf("\n\t\t\tEscolha a opcao: ");
}

void cabecalho()
{
   system("cls");
   printf("\nUPIS - ESTRUTURA DE DADOS                            PROF. VICENTE TEIXEIRA\n");
   printf("\t\t                CONVERTER       \n");
   printf("\t\t          DECIMAL PARA BINARIO    \n\n");
   return;
}
/*==============================================================================*/
