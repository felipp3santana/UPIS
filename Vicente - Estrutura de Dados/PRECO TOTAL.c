#include <stdio.h>

//=======MENU========
void menu(float *total)
{
    system("cls");
    printf("\n\n    CODIGO DO PRODUTO    |    VALOR UNITARIO\n");
    printf("    =================    |    ==============\n");
    printf("          1001           |        R$ 8,32   \n");
    printf("          1234           |        R$ 5,25   \n");
    printf("          2541           |        R$ 3,30   \n");
    printf("          3636           |        R$ 4,45   \n");
    printf("          5005           |        R$ 5,05   \n\n");
    printf("                                  TOTAL: %.2f", *total);
    printf("\n\nInforme o codigo do produto [0 para encerrar]: ");
}

//=====PRINCIPAL=====
void main()
{
    float soma = 0;
    int codigo;

    do
    {
        menu(&soma);
        scanf("%d", &codigo);
        switch(codigo)
        {
        case 1001:
            soma = soma + 8.32;
            break;
        case 1234:
            soma = soma + 5.25;
            break;
        case 2541:
            soma = soma + 3.30;
            break;
        case 3636:
            soma = soma + 4.45;
            break;
        case 5005:
            soma = soma + 5.05;
            break;
        case 0:
            printf("\n\n====== PROGRAMA ENCERRADO ======\n\n");
            break;
        default:
            printf("\n                Codigo invalido!\n");
            getch();
        break;
        }
    }
    while(codigo != 0);
    return;
}
