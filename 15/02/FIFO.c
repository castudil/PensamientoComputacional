/**
Escriba un programa que reciba N números enteros, los almacene en una lista enlazada y los imprima.

Entrada:
Corresponde al entero N [0, 100], seguido de los N enteros a almacenar.

Salida:
Deben ser los N enteros almacenados en la lista enlazada, en una linea y separados por un espacio. Si la lista no posee elementos, indicarlo con LISTA VACIA.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5
1 2 3 4 5

Salida a:
1 2 3 4 5 


Entrada b:
0

Salida b:
LISTA VACIA 
**/


#include<stdio.h>
#include<stdlib.h>  // para el malloc

//firmas

struct nodo{
  int dato; // dato qu queremos almacenar
  struct nodo* otro; // puntero al tipo de estructura 
};

struct nodo *inicio; //variables globales
struct nodo *fin;

void insertar(int x){
    if(inicio==NULL){ // primer elemento
      //printf("holis\n");
       inicio = (struct nodo*)  malloc (sizeof(struct nodo) );  //malloc
       inicio->dato=x;
       inicio->otro=NULL;
       fin=inicio;
    } 
    else{ // caso general
      //printf("OK\n");
      fin->otro= (struct nodo*)  malloc (sizeof(struct nodo) ); // primer carro
      fin->otro->dato=x;
      fin->otro->otro=NULL;
      fin=fin->otro; 
    }
}

void imprimir(struct nodo* p){
  while(p!=NULL){
    //printf("YAPO!\n");
    printf("%d ",p->dato);
    p=p->otro;
  }
}

int main(){
  //struct nodo *inicio,*fin; // variables locales
  int i,n;
  int x;
  inicio=NULL;
  fin=NULL;
  scanf("%d",&n); // leer un valor
     
   for(i=0;i<n;i++){  
        scanf("%d",&x); // leemos otro valor
        insertar(x);//insertar en la lista
    } 

    imprimir(inicio); //acceder a los datos
    printf("\n");
  return 0;
}