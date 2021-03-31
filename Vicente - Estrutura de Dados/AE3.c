#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 50

void main (){
    int i, idade, maiorIdade = 0, menorIdade = 0;
    srand(time(NULL));
    for(i = 0; i < TAM; i++)
        {
        if(i % 10 == 0)
            printf("\n");

        idade = 20 + rand() % 61;
        printf("[%2d], ", idade);

        if(i == 0)
            menorIdade = idade;

        if(idade > maiorIdade)
            maiorIdade = idade;
        else
                if(idade < menorIdade)
                menorIdade = idade;
        }
    printf("\n\n %d = Maior Idade \n %d = Menor Idade \n", maiorIdade, menorIdade);
}
