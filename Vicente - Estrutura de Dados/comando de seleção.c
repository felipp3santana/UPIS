#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"portuguese");
    int mes;
    printf("Informe um m�s [de 1 a 12] para saber sua quantidade de dias: ");
    scanf("%d", &mes);
    printf("\n");
    switch(mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("M�s com 31 dias.");
        break;
    case 2:
        printf("M�s com 28 dias.");
        break;
    case 4: case 6: case 9: case 11:
        printf("M�s com 30 dias.");
        break;
    default :
        printf("N�mero inv�lido");
    }
printf("\n");
}
