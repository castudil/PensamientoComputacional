/**

Lista circular simple

autor: C Astudillo
fecha: 28/07/2020

funcion insercion
funcion recorrer/imprimir
funcion insercion (variante)

---------------
insercion
---------------
usar tres punteros, p,q y r. p apunta al inicio, q, ultimo elemento, r para crear nuevos elementos.

entrada:
dato, entero
salida:
lista modificada, donde se agrega una casilla con el dato respectivo


**/

#include<stdio.h>
#include<stdlib.h>

struct nodo{
	int dato;
	struct nodo *otro;
};

struct nodo *p,*q;

//firmas
void insertar(int dato);
void imprimir();


int main(){
  int x,n,i;
  int num,pos;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    insertar(x);
  }
  imprimir(); 
  printf("\n");
  return 0;
}


void insertar(int dato){
	struct nodo *r;
	if(p==NULL){ //primer caso
		p=(struct nodo*)malloc(size(struct nodo)); // reservando memoria
		p->dato=dato;
		p->otro=p; // en la lista circular el ultimo apunta al primero
		q=p; //detalle q apunta al ultimo elemento (unico elemento en este caso)
	}
	else { //caso general
		r=(struct nodo*)malloc(size(struct nodo)); // reservando memoria
		r->dato=dato;  // llenamos la informacion
		r->otro=p; // r apunta a p que es el primer elemento
		q->otro=r; // el ultimo elemento apunta a r que es el nuevo elemento
		q=r; // q pasa a apuntar al ultimo elemento
	}
}


void imprimir(){
  struct nodo *aux=p;
  if(aux==NULL) // lista esta vacia.
 
  do{
    printf("%d ",aux->dato); // imprimir dato
    aux=aux->otro; // avanzamos
  }while(aux!=p); // p marcara el final de la lista

}



