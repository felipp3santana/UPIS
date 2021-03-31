#include <stdio.h>

int mult10(int i);
void qtNotas(int i, int *qt10, int *qt50);

void main(){
int x,notas10,notas50;
    printf("Informe o valor de saque: ");
    scanf("%d", &x);
    if(mult10(x)){
        qtNotas(x,&notas10,&notas50);
        printf("\nValor de saque = R$%d\nQuantidade de notas de 50: %d\nQuantidade de notas de 10: %d\n\n", x, notas50, notas10);
        }
    else
        printf("\nO valor informado nao e multiplo de 10.\n");
}

int mult10(int i){
  return(i%10==0);
}

void qtNotas(int i, int *qt10, int *qt50){
    *qt50 = i/50;
    *qt10 = (i%50)/10;
}

