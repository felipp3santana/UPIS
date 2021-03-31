#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 20
#define a 19.33

void main(){
int i,posMaior,posMenor;
float vet1[20],maiorElem,menorElem;
srand(time(NULL));

    for(i=0;i<TAM;i++){
        vet1[i] = (float)rand()/(float)(RAND_MAX/a);
        if(i==0){
            maiorElem = vet1[i];
            posMaior = i+1;
            menorElem = vet1[i];
            posMenor = i+1;
        }
        if(vet1[i]>maiorElem){
            maiorElem = vet1[i];
            posMaior = i+1;
        }
        if(vet1[i]<menorElem){
            menorElem = vet1[i];
            posMenor = i+1;
        }
    }
    for(i=0;i<TAM;i++){
        printf("|%5.2f| ", vet1[i]);
        if(i==9)
            printf("\n");
    }

printf("\n\n===========================================\n");
printf("Maior elemento = %5.2f\t| Posicao Maior: %d\nMenor elemento = %5.2f\t| Posicao Menor: %d", maiorElem,posMaior,menorElem,posMenor);
printf("\n===========================================================\n");
printf("A diferenca entre o maior e menor elemento do vetor = %.2f", maiorElem-menorElem);
printf("\n===========================================================\n\n");
}
