#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 10
int main(){
int i;
float vet1[N];
srand(time(NULL));
for(i=0;i<N;i++){
vet1[i]=rand()%100;
printf("%d ", vet1[i]);
}
return 0;
}
