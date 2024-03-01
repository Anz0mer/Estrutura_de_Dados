#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int valor;
  stuct celula *proxima;
} celula;

typedef struct{
  int qtde;
  celula *primeira;
} lista;
