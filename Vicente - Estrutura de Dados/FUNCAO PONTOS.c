#include <stdio.h>
#include <math.h>
#define TAM 3
typedef struct ponto{
    float x;
    float y;
    }Ponto;
Ponto pontos[2];

float distancia(Ponto p1, Ponto p2){
    float resultado;
    resultado = sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
    return (resultado);
}

float main(){
    int k;
    float result;

for(k=1;k<TAM;k++){
    printf("Informe o valor de X %d: ", k);
    scanf("%f", &pontos[k].x);
    printf("Informe o valor de Y %d: ", k);
    scanf("%f", &pontos[k].y);
}

printf("\nX1: %.2f, Y1: %.2f, X2: %.2f, Y2: %.2f", pontos[1].x, pontos[1].y, pontos[2].x, pontos[2].y);

result = distancia(pontos[1],pontos[2]);

printf("\nA Distancia entre os dois pontos e: %.2f\n", result);

return 0;
}
