#include <stdio.h>
#include <conio.h>

void incrementar(int *c);

void main(){
    int hora=0, min=0, seg=0;
    char opt='n';

    while (opt != 's'){
        system("cls");
        printf("Horario - %d : %d : %d", hora, min, seg);
        incrementar(&seg);
    }

}

void incrementar(int *c){
    *c = *c+1;
    return;
}
