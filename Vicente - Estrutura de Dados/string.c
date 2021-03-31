#include <stdio.h>
#include <string.h>

int main(void){
char entrada[4][20];
int i,j,check;

for(i=1;i<4;i++)
    {
    printf("Informe a %d palavra: ", i);
    gets(entrada[i]);
    }

check = strcmp(entrada[2],entrada[1]);

    if (check > 0){
        i = 2;
        check = strcmp(entrada[3],entrada[1]);
        if (check > 0){
            printf("\n\n=====Ordem alfabetica=====\n%s\n",entrada[1]);
            j = 3;}
        else{
            printf("\n\n=====Ordem alfabetica=====\n%s\n",entrada[3]);
            j = 1;}
    }

    else{
        i = 1;
        check = strcmp(entrada[3],entrada[2]);
        if (check > 0){
            printf("\n\n=====Ordem alfabetica=====\n%s\n",entrada[2]);
            j = 3;}
        else{
            printf("\n\n=====Ordem alfabetica=====\n%s\n",entrada[3]);
            j = 2;}
    }

check = strcmp(entrada[i],entrada[j]);

    if (check > 0)
        printf("%s\n%s\n",entrada[j],entrada[i]);
    else
        printf("%s\n%s\n",entrada[i],entrada[j]);

}
