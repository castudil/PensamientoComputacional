#include<stdio.h>
#include<stdlib.h>

/*
imprimir en orden ascendente

entrada
4
4 7 9 10
salida
4 7 9 10
*/


/**
estructura para listas doblemente encadenadas
**/
struct nodo2{
  int dato;
  struct nodo2 *ant;
  struct nodo2 *sgte;
};

struct nodo2 *inicio=NULL;
struct nodo2 *fin=NULL;

void insertar(int dato);
void imprimir_ascedente();
void imprimir_descendente();
void imprimir_descendente2();

/**
eliminar x de la lista si existe

Entrada
6
4 7 9 10 15 3
10
salida
4 7 9 15 3

entrada
10
1 2 3 4 5 6 5 8 9 5
5
salida
1 2 3 4 6 5 8 9 5

**/

void imprimir_eliminacion(int x);


int main(){
  int x;
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    insertar(x);
  }
  imprimir_ascedente();
  printf("\n");
  imprimir_descendente2();
  printf("\n");
  return 0;
}


void insertar(int dato){
  struct nodo2 *r;
  if(inicio==NULL){
    inicio= (struct nodo2*) malloc (sizeof(struct nodo2));
    inicio->dato=dato;
    inicio->sgte=NULL;
    inicio->ant=NULL;
    fin=inicio;
    //printf("primer elemento!\n");
  }
  else{ // caso general
    r=(struct nodo2*) malloc (sizeof(struct nodo2));
    r->dato=dato;
    r->sgte=NULL;
    r->ant=fin;
    fin->sgte=r;
    fin=r;
    //printf("caso general!\n");
  }
}

void imprimir_ascedente(){
  struct nodo2 *aux=inicio; // puntero auxiliar para recorrer la listas
  while(aux!=NULL){
    printf("%d ",aux->dato);
    aux=aux->sgte; // equivalente a "sumar" el nuevo elemento
  }
}


void imprimir_descendente(){
  struct nodo2 *aux;
  // for(VALOR_INICIAL;CONDICION_DE_TERMINO;INCREMENTO/DECREMENTO)
  for(aux=fin;aux!=NULL;aux=aux->ant){
    printf("%d ",aux->dato);
  }
}

void imprimir_descendente2(){
  struct nodo2 *aux=fin;
  // for(VALOR_INICIAL;CONDICION_DE_TERMINO;INCREMENTO/DECREMENTO)
   while(aux!=NULL){
    printf("%d ",aux->dato);
    aux=aux->ant; // equivalente a "sumar" el nuevo elemento
  }
}

