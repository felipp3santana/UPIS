#include <stdio.h>
void main( ) {
    int vet[ ] = {10, 20, 35, 40, 50};
    int c, aux;
    for (c = 0; c < 4; c++)
        if (vet[c] == 20 )
            vet[c] = 5;
        else if (vet[c] % 2 == 1)
                 aux = vet [ c ] / 10;
             else if(vet[c] >= 40)
                 vet[c] = vet[c-1];
    vet [0] = vet[aux];

for (c = 0; c < 5; c++)
    printf("%2d, ", vet[c]);

}

