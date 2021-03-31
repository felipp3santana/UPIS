#include "tadVerbete.h"
#include "tadLista.c"

// =============== headers das operacoes do tadLista ========================
void criaLista (Lista *lst);
int vaziaLista (Lista *lst);
int cheiaLista (Lista *lst);
int insereLista (Verbete v, Lista *lst);
int buscaLista(Verbete v, Lista *lst);
int excluiLista(Verbete v, Lista *lst);
Lista ordenaIngles(Lista lst);
Lista ordenaPort(Lista lst);
