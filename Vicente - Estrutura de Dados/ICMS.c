#include <stdio.h>
#include <ctype.h>
#include <math.h>

void main()
{
    float valor,icms = 0;
    char ch;
    printf("====VALOR ICMS====");
    printf("\n\nInforme o valor do produto: ");
        scanf("%f", &valor);
    printf("\nInforme a categoria do produto [Informe 'E' para Outros]: ");
        fflush(stdin);
        ch = getchar();
        ch = toupper(ch);

    switch(ch)
        {
        case 'A':
            icms = valor*0.13;
            printf("\n O valor do ICMS corresponde a: R$%.2f\n", icms);
            break;
        case 'B':
            icms = valor*0.15;
            printf("\n O valor do ICMS corresponde a: R$%.2f\n", icms);
            break;
        case 'C':
            icms = valor*0.18;
            printf("\n O valor do ICMS corresponde a: R$%.2f\n", icms);
            break;
        case 'D':
            icms = valor*0.21;
            printf("\n O valor do ICMS corresponde a: R$%.2f\n", icms);
            break;
        case 'E':
            icms = valor*0.10;
            printf("\n O valor do ICMS corresponde a: R$%.2f\n", icms);
            break;
        default:
            printf("\n Categoria Invalida\n");
        break;
        }
    return;
}
