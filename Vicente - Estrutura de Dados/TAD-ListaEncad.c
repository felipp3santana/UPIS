// Autor: Vicente Teixeira



/*==============================================================================
         Estruturas de Dados do TAD LISTA ENCAD
================================================================================*/

typedef struct {
    char nome[26];
    int idade;
}Pessoa;

typedef struct Cel * Ponteiro;

typedef struct Cel {
      Pessoa elemento;
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
void insereFinal(Pessoa x, Lista *lst)
{
    Ponteiro Paux = (Ponteiro)malloc(sizeof (Celula));  // Passo1
    if (Paux == NULL) {      //  overflow de mem�ria
        return;
    }
    Paux->elemento = x;          // Passo2
    Paux->prox = NULL;          // Passo3
    if (vazia(lst))            // Passo4 - condicional
         lst->inicio    = Paux;
    else lst->fim->prox = Paux;
    lst->fim = Paux;            // Passo5
    lst->tam++;                // Passo6

}
//==============================================================================
Ponteiro buscaLista(Pessoa x, Lista *lst)
{
     Ponteiro pAux = lst->inicio;
     while (pAux != NULL) {
           if (strcmp(pAux->elemento.nome, x.nome) == 0)
               return (pAux);   // Encontrou elemento
           else
               pAux = pAux->prox;
     }
     return(pAux);      // N�o ncontrou elemento
}
//==============================================================================
int excluiLista(Pessoa x, Lista *lst)
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
         pAux1->prox = pAux->prox;    // Passo 1
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
        printf("\n\tNome: %20s  <-->  Idade: %2d.", pAux->elemento.nome, pAux->elemento.idade);
        pAux = pAux->prox;
    }
}
