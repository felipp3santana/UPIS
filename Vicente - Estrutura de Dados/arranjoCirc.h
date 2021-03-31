// Autor: Vicente Teixeira

#include "arranjoCirc.c"

void iniciaFila (Fila *fila);
int sucessor (int pos);
int isEmpty (Fila *fila);
int isFull (Fila *fila);
int enqueue(Elemento x, Fila *fila);
int dequeue (Elemento *x, Fila *fila);
