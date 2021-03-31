// Autor: Vicente Teixeira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD-ListaEncad.c"

//===========   Protótipos do TAD LISTA ENCAD ==================================

void criaLista (Lista *);

int vazia (Lista *);

void insereFinal(Pessoa , Lista *);

Ponteiro buscaLista(Pessoa , Lista *);

int excluiLista(Pessoa , Lista *);

void listagem(Lista *);
