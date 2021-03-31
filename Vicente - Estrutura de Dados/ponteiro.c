void incrementa(int *x, int *y);

int main(){
 int n = 0, a[] = {1,2,3};
 for (int i=0; i<3; i++){
 incrementa(&a[i],&n);
 printf("\n %d %d ",a[i], n);
 }
}

void incrementa(int *x, int *y){
 *x = *x + (*y);
 (*y)++;
}
