#include<stdio.h>
#include<math.h>
void main (){
 float mat[3][5] = {35.6, 36.4, 38.6, 38.0, 36.0,
                  36.1, 37.0, 37.2, 40.5, 40.4,
                  35.5, 35.7, 36.1, 37.0, 39.2};
 float maiorTemp,soma;
 int i, j,periodo,dia;

 // mostra o conteúdo de matriz
printf("\n\n===================Matriz===================\n");
for(i = 0; i < 3; i++){
    for(j = 0; j < 5; j++){
        printf("| %2.1f | ", mat[i][j]);
    }
    printf("\n");
    }

// instante do dia que apresentou maior temperatura
for(i = 0; i < 3; i++){
    for(j = 0; j < 5; j++){
            if(mat[i][j]>maiorTemp){
            maiorTemp = mat[i][j];
            periodo = i;
            dia = j+1;
            }
    }
}

printf("\n\nPeriodo do dia em que apresentou maior temperatura: ");
switch(periodo){
case 0:
    printf("Manha");
    break;
case 1:
    printf("Tarde");
    break;
case 2:
    printf("Noite");
    break;
}
printf("\nDia: %d",dia);
printf("\n\n");

// temperatura media no terceiro dia
for(i = 0; i < 3; i++)
    soma += mat[i][2];

printf("Temperatura media no terceiro dia: %2.1f\n\n", soma/3);
}
