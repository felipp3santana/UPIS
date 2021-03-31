// Autor: Vicente Teixeira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100   // MAX é uma cosntante que define o tamanho máximo do arranjo da Pilha

// struct para definir um Objeto genérico, descrito apenas pelo seu nome
typedef struct {
    int numBinario;
}Dados;

// struct para definir a Pilha, um vetor de Dados e uma marca do topo da Pilha
typedef struct {
    Dados vet[MAX];
    int topo;
}Pilha;

//   Implementação das Operações do Tipo Abstrato de Dados PILHA

void newStack (Pilha *p)
{
   p->topo =  0;
}

int push (Dados x, Pilha *pilha)
{
      pilha->vet[pilha->topo] = x;
      pilha->topo++;
      return 0;    // operação com sucesso
}


Dados* getStack(Pilha *pilha)
//  Retorna um VETOR com todos os elementos da Pilha, organizados
//  do topo para o fundo. Pilha original permanece intacta.
{
    Dados *vetor;
    vetor = (Dados*) malloc(sizeof(Dados)*(pilha->topo)); // vetor do tamanho da Pilha
    int i = pilha->topo - 1;
    int j = 0;
    while (i >= 0)
    {
 	    vetor[j] = pilha->vet[i];
 	    j++;
 	    i--;
    }
    return vetor;
}
