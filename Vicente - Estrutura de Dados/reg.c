#include<stdio.h>

void incrementa (int *a, int b) {
     *a += b;
}

main (){
     int num = 100;
     int i = 0;
     do{
        printf("Valor de num = %d\n", num);
        incrementa(&num,50);
        i++;
     } while(i <= 5);
}
