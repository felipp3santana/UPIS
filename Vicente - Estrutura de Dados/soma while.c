#include <stdio.h>
#include <ctype.h>

void main(){
int idade,maiorIdade=0,mediaMulheres=0,cont;
char sexo;
while (idade>0)
    {
    printf("\nInforme o sexo [M ou F]: ");
        scanf("%c",&sexo);
        sexo = toupper(sexo);
        fflush(stdin);
    printf("Informe a idade [0 para encerrar]: ");
        scanf("%d", &idade);
        fflush(stdin);
    if((maiorIdade==0) && (sexo=='M'))
        maiorIdade = idade;
    if((idade>maiorIdade)&&(sexo=='M'))
        maiorIdade = idade;
    if((sexo=='F') && (idade>0))
        {
        mediaMulheres += idade;
        cont ++;
        }
    }
mediaMulheres = mediaMulheres / cont;
printf("\n===============\nIdade do homem mais velho : %d anos!", maiorIdade);
printf("\nMedia de idade feminina : %d anos!\n===============\n", mediaMulheres);
}
