#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
int main()
{
	int i,j;
	float vet1[N];
	srand((unsigned)time(NULL));
	for(i=0; i<N; i++){
	vet1[i] = rand()%100;
	}
	
	for(j=0; j<N; j++){
	printf("%d ", vet1[j]);
	}
return 0;
}

