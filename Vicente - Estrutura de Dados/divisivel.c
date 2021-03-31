#include <stdio.h>

long potencia (int base, int expo);

void main(){
int num1,num2;

    printf("==== potencia a^b ====\n\n");
    printf("Informe o valor de A(base): ");
    scanf("%d", &num1);
    fflush(stdin);
    printf("Informe o valor de B(expoente): ");
    scanf("%d", &num2);
    fflush(stdin);

    printf("\nA potencia de %d^%d = %d\n", num1,num2, potencia(num1,num2));

return;
}

long potencia (int base, int expo)
    {
    if (expo==0)
        return 1;
    else
        return base * potencia(base,expo-1);
    }
