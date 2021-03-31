#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

int resto, num;

printf ("\n\n    Informe o numero que deseja converter (decimal -> binario): ");
fflush(stdin);
scanf("%d", &num);
printf("\n\nVoce digitou %d.\n\n", num);

do {
    resto = convert(&num);
    printf("%d", resto);}
while (num/2!=0);
printf("\n");
return 0;
}

int convert(int *decDiv){
int result;
    result = *decDiv % 2;
    *decDiv = *decDiv/2;
return result;
}
