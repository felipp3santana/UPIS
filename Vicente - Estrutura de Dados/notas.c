#include <stdio.h>
#define TAM 10
int main() {
	float notas[TAM], soma = 0, media;
	int k;
    for(k = 0; k < TAM; k++){
        printf("Informe a nota do aluno %d: ", k+1);
        scanf("%f", &notas[k]);
        soma += notas[k];
    }
    media = soma / TAM;
    printf("\nMedia da Turma: %.2f.\n\n",media);
    for(k = 0; k < TAM; k++)
        if(notas[k] > media)
            printf("\nAluno %02d com nota maior que a media", k+1);
    printf("\n");
}
