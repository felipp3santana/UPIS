#include <stdio.h>
#define LIN 4
#define COL 5
int main() {
	int l, c, mtx[LIN][COL];
     for(l = 0; l < LIN; l++){
         for(c = 0; c < COL; c++)
            mtx[l][c] = l * 5 + c + 1;
    }
    printf("\n\n");
    for(l = 0; l < LIN; l++){
        for(c = 0; c < COL; c++)
            printf(" %02d, ", mtx[l][c]);
        printf("\n");
    }
}
