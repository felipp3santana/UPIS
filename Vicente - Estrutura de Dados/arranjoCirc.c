// Autor: Vicente Teixeira

// MAX é uma constante que define o tamanho máximo da Fila
#define MAX 5

// struct para definir um Objeto genérico, descrito pelo seu nome
typedef struct {
          char nome[21];
          // outros campos aderentes ao problema considerado
}Elemento;

// struct para definir a Fila
typedef struct {
   Elemento dados[MAX];
   int inicio, fim;
}Fila;

/*==============================================================================
       Implementação das Operações do Tipo Abstrato de Dados Fila
================================================================================*/

void iniciaFila (Fila *fila)
{
   fila->inicio = 0;
   fila->fim    = 0;
   int i;
   for(i = 0; i < MAX; i++)
        strcpy(fila->dados[i].nome, "");
}
/*==============================================================================*/
int sucessor (int pos)
{
     return ((++pos) % MAX);   // Uso de ARITMÉTICA MODULAR
}
/*==============================================================================*/
int isEmpty (Fila *fila)
{
    return (fila->fim == fila->inicio);
}
/*==============================================================================*/
int isFull (Fila *fila)
{
    return (sucessor(fila->fim) == fila->inicio);
}
/*==============================================================================*/
int enqueue(Elemento x, Fila *fila)
{
    if (isFull(fila))
        return 20;   //  Erro cod 20 - Fila Cheia!
    fila->dados[fila->fim] = x;
    fila->fim = sucessor(fila->fim);
    return 0;   //  operação realizada com sucesso!
}
/*==============================================================================*/
int dequeue (Elemento *x, Fila *fila)
{
       if(isEmpty(fila))
          return 10;   //  Erro cod 10 - Fila Vazia
       *x = fila->dados[fila->inicio];
       strcpy(fila->dados[fila->inicio].nome, "");
       fila->inicio = sucessor(fila->inicio);
       return 0;   //  operação realizada com sucesso!
}


