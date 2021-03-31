#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct verbete {
    char ingles[41];
    char portugues[41];
} Verbete;

void inicializa(Verbete *v, char *pIngl, char *pPort)
{
    strcpy(v->ingles, pIngl);
    strcpy(v->portugues, pPort);
}
void atualizaIngles(Verbete *v, char *ingl)
{
    strcpy(v->ingles, ingl);
}
void atualizaPortugues(Verbete *v, char *port)
{
    strcpy(v->portugues, port);
}
void traduzInglesPortugues(Verbete v)
{
    printf("\n\t %s significa %s.", v.ingles, v.portugues);
}
void traduzPortuguesIngles(Verbete v)
{
    printf("\n\t %s means %s.", v.portugues, v.ingles);
}
