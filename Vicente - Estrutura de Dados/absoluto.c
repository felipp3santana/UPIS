#include <stdlib.h>
#include <stdio.h>

#define TAM 100

int dado( );

int main(){
    int i,contador[6];

    for(i=0;i<TAM;i++){
        contador[dado( )]++;
        }
    for(i=1;i<7;i++)
        printf("Contagem de numeros %d = %d\n", i, contador[i]);

    return 0;
}

int dado( ){
    return (rand()%6+1);
}
