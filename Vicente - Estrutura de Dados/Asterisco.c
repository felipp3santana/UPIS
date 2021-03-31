#include <stdio.h>
void main(){
float var1,var2;
printf("Informe o salario a ser reajustado: ");
scanf("%f", &var1);

if(var1 <= 1200.00){
    var2 = var1*1.1;
    printf("\nSalario inserido: %.2f", var1);
    printf("\nSalario reajustado: %.2f\n", var2);
    }
        else
            if(var1 >= 1200.01 && var1<= 2500.00){
                var2 = (var1*1.07) + 36.00;
                printf("\nSalario inserido: %.2f", var1);
                printf("\nSalario reajustado: %.2f\n", var2);
            }
        else
            if(var1 >= 2500.01 && var1<= 4000.00){
                var2 = (var1*1.05) + 86.00;
                printf("\nSalario inserido: %.2f", var1);
                printf("\nSalario reajustado: %.2f\n", var2);
            }
        else
            if(var1 > 4000.00){
                var2 = (var1*1.04) + 126.00;
                printf("\nSalario inserido: %.2f", var1);
                printf("\nSalario reajustado: %.2f\n", var2);
            }
}
