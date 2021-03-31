#include <stdio.h>
#include<time.h>

void main(){
int lin, col, i, maiorCol, achouMaior, m[7][9];
srand(time(NULL));

//=====Carregar Matriz=====
for(lin = 0; lin < 7; lin++){
    for(col = 0; col < 9; col++)
                m[lin][col] = rand()%100;
}

//=====Exibir Matriz======
printf("==== Matriz ====\n");

for(lin = 0; lin < 7; lin++){
    printf("\n");
    for(col = 0; col < 9; col++)
            printf("%2d, ",m[lin][col]);
}

//====Verificar Ponto Cela
for(lin = 0; lin < 7; lin++){
        maiorCol = 0;
        for(col = 1; col < 9; col++){
            if(m[lin][col] >= m[lin][maiorCol])
                maiorCol= col;
            }
        achouMaior = 0;
        for(i=0;i<7;i++){
                if(m[i][maiorCol] > m[lin][maiorCol]){
                    achouMaior=1;
                    break;
                    }
        }
        if(!achouMaior)
            printf("\n\n%d e ponto de cela da linha %d e coluna %d.", m[lin][maiorCol], lin, maiorCol);
}
printf("\n\n");
}
