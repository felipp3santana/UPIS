#define MAX 10


//Estrutura de Dados da LISTA
typedef struct {
        Jogador colecao[MAX];
        int tamanho;
}Lista;

// =============== OPERAÇÕES DO TAD LISTA ========================
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

int insereLista (Jogador j, Lista *lst)
//  Insere Jogador passado pelo parâmetro j, no final da Lista lst
{
      if (cheiaLista(lst))
          return 99;  // CÓDIGO PARA LISTA CHEIA
      lst->colecao[lst->tamanho] = j;
      lst->tamanho++;
      return 0;
}


int buscaLista(Jogador j, Lista *lst)
//     Pesquisa se Jogador j está na Lista lst e retorna sua posição
//     Caso não encontre, retorna -1
{
   int  p = 0;
   while (p < lst->tamanho) {
      if (strcmp(lst->colecao[p].nome, j.nome) == 0)
          return(p);
      else p++;
   }
   return(-1) ;
}
int excluiLista(Jogador j, Lista *lst)
//  Exclui o Jogador passado pelo parâmetro j da Lista lst
{
   int i;
   int aux;
   if (vaziaLista (lst))
       return 98;  //  CÓDIGO PARA LISTA VAZIA
   i = buscaLista(j, lst);
   if (i == -1) {
       return 88;  //  CÓDIGO PARA JOGADOR NÃO ENCONTRADO
   }
   for (aux = i+1; aux <= lst->tamanho; aux++)  //  “Tapa buraco” !!!
        lst->colecao[aux-1] = lst->colecao[aux];
   lst->tamanho--;   //  atualiza marca de tamanho
   return 0;
}
