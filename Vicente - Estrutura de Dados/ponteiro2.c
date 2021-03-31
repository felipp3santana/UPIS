int calcula(int *varA, int varC);

int varC; // esta é uma variável global – observe o seu escopo!

int main(){
 int varA=10, varB=0;
 int i;
 varC = 5;
 printf("%d",i);
 return 0;
}

int calcula(int *varA, int varC){
 varC *=3 * *varA;
 *varA = *varA * 2;
 return *varA + varC;
}
