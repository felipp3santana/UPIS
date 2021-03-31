#include <stdio.h>
#define TAM 2

typedef struct cadastro{
    char titulo[31];
    char autor[21];
    int ano;
}CadLivro;

void adLivro(CadLivro *x){
    printf("==== Cadastro Livro ====\n");
        printf("Informe o nome do livro: ");
            gets(x->titulo);
        printf("Informe o nome do autor: ");
            gets(x->autor);
        printf("Informe o ano da publicacao: ");
            scanf("%d", &x->ano);fflush(stdin);
        printf("\n");
return;
}

void pesqLivro(CadLivro x[TAM]){
int i,comp;
char pesquisa[31],opt;
    printf("\n==== Pesquisa de livro ====\n");
    do
    {
        comp=1;
        printf("Informe o nome do livro que deseja pesquisar: ");
        gets(pesquisa);
        for(i=0;i<TAM;i++){
            comp = strcmp(pesquisa,x[i].titulo);
            if(comp == 0){
                printf("\n===========================\n");
                printf("Nome do livro: %s\n", x[i].titulo);
                printf("Autor do livro: %s\n", x[i].autor);
                printf("Ano da publicacao: %d", x[i].ano);
                printf("\n===========================\n");
                break;
            }
        }
            if(comp==1)
                printf("\nLivro nao encontrado!\n");
        printf("Deseja pesquisar outro livro? [S ou N]: ");
        scanf("%c", &opt);fflush(stdin);
        printf("\n");
    }while((opt=='S') || (opt=='s'));
return;
}

void main(){
int i;
CadLivro Livro[TAM];

    for(i=0;i<TAM;i++)
        adLivro(&Livro[i]);
    for(i=0;i<TAM;i++)

    pesqLivro(Livro);

return;
}

