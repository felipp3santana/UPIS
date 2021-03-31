#include <stdio.h>

void main(){
int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
(*p) += --x;
printf ("x = %d\n", x);
printf ("y = %d\n", y);
}
