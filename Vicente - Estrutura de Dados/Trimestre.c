#include <stdio.h>

void main()
{
    int num;
    printf("====Trimestre correspondente ao mes====");
    do
    {
        printf("\nInforme um mes de 1 (Janeiro) a 12 (Dezembro) ou 0 para ENCERRAR:");
        scanf("%d", &num);
        switch(num)
        {
        case 0:
            printf("\n====Programa encerrado====\n");
            break;
        case 1:  case 2: case 3:
            printf("\n  Primeiro Trimestre!\n");
            break;
        case 4: case 5: case 6:
            printf("\n  Segundo Trimestre!\n");
            break;
        case 7: case 8: case 9:
            printf("\n  Terceiro Trimestre!\n");
            break;
        case 10: case 11: case 12:
            printf("\n  Quarto Trimestre!\n");
            break;
        default:
            printf("\n  Mes invalido\n");
        break;
        }
    }
    while(num != 0);
    return;
}
