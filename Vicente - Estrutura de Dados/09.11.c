#include <stdio.h>
#define TAM 3

typedef struct cadastro{
    char nome[51];
    float altura;
    float peso;
    float imc;
}Cadastro;

void calcularIMC(Cadastro *x){
    x->imc = x->peso / pow(x->altura, 2);
}

void main(){
int i;
Cadastro cad[TAM];

    for(i=0;i<TAM;i++){
        printf("Informe o nome da %d pessoa: ", i+1);
        gets(cad[i].nome);
        fflush(stdin);
        printf("Informe a altura da %d pessoa: ", i+1);
        scanf("%f", &cad[i].altura);
        fflush(stdin);
        printf("Informe o peso da %d pessoa: ", i+1);
        scanf("%f", &cad[i].peso);
        fflush(stdin);
        printf("\n");
        calcularIMC(&cad[i]);
    }
printf("\n====================================\n");
    for(i=0;i<TAM;i++)
        printf("O IMC de %s = %.2f\n", cad[i].nome, cad[i].imc);
printf("====================================\n");
}
