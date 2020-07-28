/**

Lista circular simple

autor: C Astudillo
fecha: 28/07/2020

funcion insercion
funcion recorrer/imprimir
funcion insercion (variante)


---------------
insercion Unico
---------------

la variante en este caso implica que solo se agregan datos que no esten en la lista.
esto quiere decir que solo almacena una copia de un valor.

ejemplo
entrada
5
1 3 4 6 7

salida
1 3 4 6 7

si ingreamos 4 elementos, 1 3 4 6, luego insertamos 7. entonces el 7 se agrega exitosamente, pues el 7 no era parte de la lista anteriormente.

entrada
5
1 3 4 6 3
salida
1 3 4 6

al insertar el numero 3, se detecta que el 3 ya era parte de la lista y por lo tanto no se agrega un elemento nuevo. o sea, no se permiten duplicados.

**/

#include<stdio.h>
#include<stdlib.h>

struct nodo{
	int dato;
	struct nodo *otro;
};

struct nodo *p=NULL,*q=NULL;

//firmas
int insertar_unico(int dato);
void imprimir();


int main(){
  int x,y,n,i;
  int num,pos;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    insertar_unico(x);
  }
  
  imprimir(); 
  printf("\n");

  return 0;
}


/**
inserta dato si no estan en la lista
retorna 1 si el ingreso fue exitoso y 0 si hay duplicados.
**/
int insertar_unico(int dato){
  struct nodo *aux=p;
  struct nodo *r;

  if(p==NULL){ // lista esta vacia.
  	p=(struct nodo*)malloc(sizeof(struct nodo)); // reservando memoria
		p->dato=dato;
		p->otro=p; // en la lista circular el ultimo apunta al primero
		q=p; //detalle q apunta al ultimo elemento (unico elemento en este caso)
    return 1;  // caso exitoso
  }
 //caso general, ya hay algo en la lista. hay que verificar.
  do{
    //printf("%d ",aux->dato); // imprimir dato
    if(aux->dato == dato){ //DUPLICADO!
      return 0; //fracaso!
    }
    aux=aux->otro; // avanzamos
  }while(aux!=p); // p marcara el final de la lista

  r=(struct nodo*)malloc(sizeof(struct nodo)); // reservando memoria
	r->dato=dato;  // llenamos la informacion
	r->otro=p; // r apunta a p que es el primer elemento
	q->otro=r; // el ultimo elemento apunta a r que es el nuevo elemento
	q=r; // q pasa a apuntar al ultimo elemento

}

void imprimir(){
  struct nodo *aux=p;
  if(aux==NULL) // lista esta vacia.
    return;

  do{
    printf("%d ",aux->dato); // imprimir dato
    aux=aux->otro; // avanzamos
  }while(aux!=p); // p marcara el final de la lista

}



