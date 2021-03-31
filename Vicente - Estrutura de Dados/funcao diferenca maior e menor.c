#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#define LIN 5
int main(){
    int var1[LIN],i,j,entrada,arm,troca;
    srand(time(NULL));

//preencher vetor
    for(i=0; i<LIN; i++)
    {
        var1[i] = (rand() %20);
        if(i=0)
            arm = var1[i];
        if(i>0 && var1[i]<arm)
            {
            troca = var1[i];
            var1[i] = arm;
            var1[i-1] = troca;
            }
    }

//exibir o vetor
    for(i=0; i<LIN; i++)
        printf(" %d |", var1[i]);

//entrada
    printf("\n\nDigite um numero para adicionar ao vetor: ");
    scanf("%d", &entrada);

//posicionar entrada
var1[LIN] = entrada;

//exibir o vetor
    for(i=0; i<LIN+1; i++)
        printf(" %2d |", var1[i]);

return 0;
}
