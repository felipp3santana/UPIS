void main(){
 int x=10,j=20;
 printf("%d, %d",x,j);
 troca(&x,&j);
 printf("\n\n%d, %d",x,j);
}


void troca (int *i, int *j) {
   int temp;
   temp = *i;
   *i = *j;
   *j = temp;
}
