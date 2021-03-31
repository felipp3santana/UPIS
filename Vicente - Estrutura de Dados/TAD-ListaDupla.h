#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD-Lista.c"

//===========   Protótipos do TAD LISTA ENCAD ==================================

void criaLista (Lista *);

int vazia (Lista *);

void insereFinal(Livro , Lista *);

Ponteiro buscaLista(Livro , Lista *);

Ponteiro buscaAutor(Livro x, Lista *lst, int *contador);

int excluiLista(Livro , Lista *);

void listagem(Lista *);

void listagemInver(Lista *lst);
