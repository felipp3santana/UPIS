#include <stdio.h>
void main(){
float x,y,z,result;
printf("Insira o primeiro numero real: ");
scanf("%f", &x);
printf("Insira o segundo numero real: ");
scanf("%f", &y);
printf("Insira o terceiro numero real: ");
scanf("%f", &z);

result = (x + y + z) / 3;

printf("\nA media aritmetica entre os tres numero e: %.2f\n", result);
}
