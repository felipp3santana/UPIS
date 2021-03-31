#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
int num1,result,cont;
srand(time(NULL));
num1 = rand() % 11;
while (result>=0)
    {
    printf("Tente adivinhar o numero gerado entre 0 e 10: ");
    scanf("%d", &result);
    cont++;
    if (result<num1)
        printf("================================\nVoce errou! :(  Chute mais alto!\n================================\n\n");
    else if (result>num1)
            printf("=================================\nVoce errou! :(  Chute mais baixo!\n=================================\n\n");
        else if(result==num1){
                printf("================================================\nParabens! Voce acertou! O numero gerado era %d!\nNumero de tentativas: %d\n================================================\n\n",result, cont);
                result = -1;
        }
    }
}
