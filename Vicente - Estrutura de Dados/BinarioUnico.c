#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 20

typedef struct {
    int numBinario;
}Binario;

typedef struct {
    Binario vet[MAX];
    int topo;
}Pilha;

void newStack (Pilha *p)
{
   p->topo =  0;
}

int push (Binario x, Pilha *pilha)
{
      pilha->vet[pilha->topo] = x;
      pilha->topo++;
      return 0;    // operação com sucesso
}

int pop (Pilha *pilha, Binario *x)
{
      *x = pilha->vet[pilha->topo - 1];
      pilha->topo--;
      return 0;    // operação com sucesso
}

int converter(int decimal);

int main(void)
{
    Binario resultBin;
	Pilha pilha;
	int i,num;

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
}



int converter(int decimal)
{
int result;
    if (decimal/2 != 0)
        result = decimal%2;
    else
        return 0;
return result;
}

//===============================================
typedef struct {
    int numBinario;
}Binario;

typedef struct {
    Binario vet[MAX];
    int topo;
}Pilha;

void newStack (Pilha *p)
{
   p->topo =  0;
}

int push (Binario x, Pilha *pilha)
{
      pilha->vet[pilha->topo] = x;
      pilha->topo++;
      return 0;    // operação com sucesso
}

int pop (Pilha *pilha, Binario *x)
{
      *x = pilha->vet[pilha->topo - 1];
      pilha->topo--;
      return 0;    // operação com sucesso
}
