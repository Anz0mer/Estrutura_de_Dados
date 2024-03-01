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

lista *criar_lista(){
  lista *lde = malloc(sizeof(lista));
  lde->qtde = 0;
  lde->primeira = NULL;
  return lde;
}

int main(void){
  printf("Hello World\n");
  return 0;
}
