#include <stdio.h>
void main(){
float base,altura,area,perimetro;

printf("Informe quanto vale a base do retangulo: ");
scanf("%f", &base);
printf("Informe quanto vale a altura do retangulo: ");
scanf("%f", &altura);

area = base*altura;
perimetro = 2 * (base + altura);

printf("\nA area do retangulo corresponde a: %.2f\n", area);
printf("O perimetro do retangulo corresponde a : %.2f\n", perimetro);
}

