#define MAX 10

//Estrutura de Dados da LISTA
typedef struct {
        Verbete dicionario[MAX];
        int tamanho;
}Lista;

// =============== OPERA��ES DO TAD LISTA ========================
void criaLista (Lista *lst)
{
   lst->tamanho  =  0;
}

int vaziaLista (Lista *lst)
{
    return (lst->tamanho == 0);
}

int cheiaLista (Lista *lst)
{
    return (lst->tamanho >= MAX);
}

int insereLista (Verbete v, Lista *lst)
//  Insere Verbete passado pelo par�metro j, no final da Lista lst
{
      if (cheiaLista(lst))
          return 99;  // C�DIGO PARA LISTA CHEIA
      lst->dicionario[lst->tamanho] = v;
      lst->tamanho++;
      return 0;
}


int buscaLista(Verbete v, Lista *lst)
//     Pesquisa se Jogador j est� na Lista lst e retorna sua posi��o
//     Caso n�o encontre, retorna -1
{
   int  p = 0;
   while (p < lst->tamanho) {
      if (strcmp(lst->dicionario[p].ingles, v.ingles) == 0)
          return(p);
      else p++;
   }
   return(-1) ;
}
int excluiLista(Verbete v, Lista *lst)
//  Exclui o Jogador passado pelo par�metro j da Lista lst
{
   int i;
   int aux;
   if (vaziaLista (lst))
       return 98;  //  C�DIGO PARA LISTA VAZIA
   i = buscaLista(v, lst);
   if (i == -1) {
       return 88;  //  C�DIGO PARA JOGADOR N�O ENCONTRADO
   }
   for (aux = i+1; aux <= lst->tamanho; aux++)  //  �Tapa buraco� !!!
        lst->dicionario[aux-1] = lst->dicionario[aux];
   lst->tamanho--;   //  atualiza marca de tamanho
   return 0;
}

Lista ordenaIngles(Lista lst)
//   Ordena a lista pelas palavras em Ingles
//   Pelo M�TODO DA BOLHA (BUBBLE SORT)
{
    Verbete aux;
    int i;
    int j;
    for(i=0; i < lst.tamanho-1; i++)
        for(j=i+1; j< lst.tamanho; j++)
                if(strcmp(lst.dicionario[j].ingles, lst.dicionario[i].ingles) < 0)
                {
                        aux               = lst.dicionario[i];
                        lst.dicionario[i] = lst.dicionario[j];
                        lst.dicionario[j] = aux;
                }
    return (lst);
}

Lista ordenaPort(Lista lst)
//   Ordena a lista pelas palavras em Ingles
//   Pelo M�TODO DA BOLHA (BUBBLE SORT)
{
    Verbete aux;
    int i;
    int j;
    for(i=0; i < lst.tamanho-1; i++)
        for(j=i+1; j< lst.tamanho; j++)
                if(strcmp(lst.dicionario[j].portugues, lst.dicionario[i].portugues) < 0)
                {
                        aux               = lst.dicionario[i];
                        lst.dicionario[i] = lst.dicionario[j];
                        lst.dicionario[j] = aux;
                }
    return (lst);
}

