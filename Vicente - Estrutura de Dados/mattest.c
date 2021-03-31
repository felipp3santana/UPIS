#include <stdio.h>
#include<time.h>

void main(){

int i, j, m[10][10];
srand(time(NULL));

for(i = 0; i < 10; i++){
    for(j = 0; j < 10; j++)
            m[i][j] = rand()%10;
}

for(i = 0; i < 10; i++){
    printf("\n");
        for(j = 0; j < 10; j++)
            printf("%d, ", m[i][j]);
    }

for(i = 0; i < 10; i++){
    for(j = 0; j < 10; j++){
        if(m[i, j] || m[j, i]){
            printf("\n\n=== Matriz nao simetrica! ===\n\n");
            return;
        }
    }
}

printf("\n\n=== Matriz simetrica! ===\n\n");
}

