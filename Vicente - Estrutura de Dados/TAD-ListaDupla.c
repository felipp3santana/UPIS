#include <stddef.h>

/*==============================================================================
         Estruturas de Dados do TAD LISTA ENCAD
================================================================================*/

typedef struct {
    char titulo[31];
    char nomeAutor[31];
    char nomeEditora[31];
    int ano;
    int control;
}Livro;

typedef struct Cel * Ponteiro;

typedef struct Cel {
      Livro elemento;
      Ponteiro prox;
}Celula;

typedef struct {
       Ponteiro inicio, fim;
       int tam;
}Lista;

/*==============================================================================
         Implementa��o da Opera��es do TAD LISTA ENCAD
================================================================================*/

void criaLista (Lista *lista)
{
   lista->inicio = NULL;
   lista->fim    = lista->inicio;
   lista->tam    = 0;
}
//==============================================================================
int vazia (Lista *lista)
{
    return (lista->inicio == NULL);
}
//==============================================================================
void insereFinal(Livro x, Lista *lst)
{
    Ponteiro Paux = (Ponteiro)malloc(sizeof (Celula));  // Passo1
    if (Paux == NULL) {      //  overflow de mem�ria
        return;
    }
    Paux->elemento = x;          // Passo2
    Paux->prox = NULL;          // Passo3
    if (vazia(lst))            // Passo4 - condicional
         lst->inicio = Paux;
      else lst->fim->prox = Paux;
    lst->fim = Paux;            // Passo5
    lst->tam++;                // Passo6

}
//==============================================================================
Ponteiro buscaLista(Livro x, Lista *lst)
{
     Ponteiro pAux = lst->inicio;
     while (pAux != NULL) {
           if (strcmp(pAux->elemento.titulo, x.titulo) == 0)
               return (pAux);   // Encontrou elemento
           else
               pAux = pAux->prox;
     }
     return(pAux);      // N�o ncontrou elemento
}
//==============================================================================
Ponteiro buscaAutor(Livro x, Lista *lst, int *contador)
{
     Ponteiro pAux = lst->inicio;
     while (pAux != NULL) {
           if (strcmp(pAux->elemento.nomeAutor, x.nomeAutor) == 0){
               printf("\n\t  Titulo do Livro:  %s", pAux->elemento.titulo);
               printf("\t Autor do livro:  %s", pAux->elemento.nomeAutor);
               printf("\t Editora:  %s", pAux->elemento.nomeEditora);
               printf("\t Ano:  %d\n", pAux->elemento.ano);
               pAux = pAux->prox;
               *contador += +1;}
           else
               pAux = pAux->prox;
     }
     return(pAux);      // N�o ncontrou elemento
}
//==============================================================================
int excluiLista(Livro x, Lista *lst)
{
    Ponteiro pAux, pAux1;
    pAux = buscaLista(x, lst);
    if(pAux == NULL)
         return 99;  // Elemento n�o encontrado
    if(pAux == lst->inicio){
         //Exclus�o 1� Elemento
         lst->inicio = lst->inicio->prox;  // Passo1
         if(lst->inicio==NULL) lst->fim = NULL;
    }
    else {
         // Exclus�o de elemento que n�o 1�
         pAux1 = lst->inicio;   // Passo 0
         while(pAux1->prox != pAux)
               pAux1 = pAux1->prox;
         pAux1->prox = pAux->prox;// Passo 1
         if(lst->fim == pAux)
              //  Exclus�o do �ltimo
              lst->fim = pAux1;
    }
    free (pAux);      // Passo 2
    lst->tam--;      //  Passo3
    return 0;       // Exclus�o com sucesso
}
//==============================================================================
void listagem(Lista *lst){
    Ponteiro pAux = lst->inicio;
    while (pAux != NULL){
        printf("\n\tTitulo do livro: %s  <-->  Autor: %s  <-->  Editora: %s  <-->  Ano publicacao: %d", pAux->elemento.titulo, pAux->elemento.nomeAutor, pAux->elemento.nomeEditora, pAux->elemento.ano);
        pAux = pAux->prox;
    }
}
