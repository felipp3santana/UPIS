#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TAM 1000000

int dado();

int main(){
    srand(time(NULL));
    int i, contador[] = {0, 0, 0, 0, 0, 0};
    for(i=0;i<TAM;i++)
        contador[dado()]++;
    for(i=1;i<7;i++)
        printf("Contagem de numeros %d = %d\n", i, contador[i]);

    return 0;
}

int dado(){
    return (rand()%6+1);
}
