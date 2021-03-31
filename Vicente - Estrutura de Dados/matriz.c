#include <stdio.h>
#define LIN 8
int main() {
    int x,aux,vet[LIN];
    for(x=0;x<LIN;x++)
        vet[x] = x+1;
    printf("\n");
    for(x=0;x<LIN;x++)
        printf(" %02d, ", vet[x]);
    printf("\n");
    for(x=0;x<LIN/2;x++)
    {
        aux = vet[x];
        vet[x] = vet[LIN-1-x];
        vet[LIN-1-x] = aux;
    }
    printf("\n");
    for(x=0;x<LIN;x++)
        printf(" %02d, ", vet[x]);
    printf("\n");
}

