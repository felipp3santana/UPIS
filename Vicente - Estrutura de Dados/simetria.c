#include <stdio.h>
#include<time.h>

int pontoSela(ponto);

void main(){
int i,j,k, testagem, pontosela,linha,coluna,indice, m[7][9];
srand(time(NULL));

for(i = 0; i < 7; i++){
    for(j = 0; j < 9; j++)
                m[i][j] = rand()%100;
}


printf("==== Matriz ====\n");
for(i = 0; i < 7; i++){
    printf("\n");
    for(j = 0; j < 9; j++)
            printf("%2d, ",m[i][j]);
}

indice = 1;
for(i = 0; i < 7; i++){
    pontosela = 0;
    linha = 0;
    coluna = 0;
    testagem = 1;
    for(j = 0; j < 9; j++){
            if(m[i][j]> pontosela){
                pontosela = m[i][j];
                linha = i;
                coluna = j;
                testagem = pontoSela(pontosela, m);
                    if(testagem==1){
                printf("\n\nPonto sela %d = %d\nLocalizacao = %d , %d", indice, pontosela, linha,coluna);
                indice++;}
                }
            }
    }

printf("\n\n");
}

int pontoSela(ponto){
int k,n;
    for(k = 0; k < 7; k++){
                if (ponto < m[k][coluna]);
                    return 0;
}

