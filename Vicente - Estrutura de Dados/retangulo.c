#include <stdio.h>
#include <stdlib.h>

typedef struct retan {
    float base;
    float altura;
} Retangulo;

void iniciarRetangulo(Retangulo *pRet, float base, float altura){
    pRet -> base = base;
    pRet -> altura = altura;
}

void modificarRetangulo(Retangulo *pRet, float base, float altura){
    pRet -> base = base;
    pRet -> altura = altura;
    printf("\nNova base do triangulo inserida: %.2fcm quadrados", base);
    printf("\nNova altura do triangulo inserida: %.2fcm quadrados\n", altura);
}

void calcularArea(Retangulo retan){
    float area;
    area = retan.base * retan.altura;
    printf("\nA area do triangulo e igual a: %.2f cm quadrados!", area);
}

void mostrarRetangulo(Retangulo retan){
    printf("\nBase do triangulo: %.2fcm quadrados", retan.base);
    printf("\nAltura do triangulo: %.2fcm quadrados\n", retan.altura);
    calcularArea(retan);
}



