#include <stdio.h>
#define TAM 5

void main(){
int i;
float valor, produto = 0;
printf("==Ler 5 valores e calcular seu produto==\n");
for(i=1;i<=TAM;i++)
    {
    printf("Insira o valor %d: ", i);
    scanf("%f", &valor);
    if (i==1)
        produto = valor;
    else
        produto = produto * valor;
    }
    printf("\nO produto entre os 5 valores = %.1f", produto);
    printf("\n");
}
