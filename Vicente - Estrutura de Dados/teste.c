#include <stdio.h>
#include <time.h>

void troca(int *x, int *y){
int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void ordena(int *a, int *b, int *c){
    if(*a > *b)
        troca(a,b);
    if(*a > *c)
        troca(a,c);
    if(*b > *c)
        troca(b,c);
}


void main(){
int A,B, C;
srand(time(NULL));

    A = rand()%100;
    B = rand()%100;
    C = rand()%100;

    printf("====| Antes da Troca |====\n\t  A = %d\n\t  B = %d\n\t  C = %d\n\n", A, B, C);

    ordena(&A,&B,&C);

    printf("====| Apos a Troca |====\n\t  A = %d\n\t  B = %d\n\t  C = %d\n\n", A, B, C);
}
