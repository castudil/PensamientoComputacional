/**

como imprimir un  arreglo de manera recursiva

Cuales son los elementos de una funcion recursiva??

RETORNO f(PARAMETROS){
  PROCESAMIENTO
  CONDICION DE TERMINO
  LLAMDO RECURSIVO f(PARAMETRO SIMPLIFICADO)
}

estrategia

entrada
un arreglo
salida
imprimir el arreglo
metodo recursivo

crear funcion f, recibe arreglo n
PROCEMIENTO: imprimir elemento actual i-esimo (primer elemento)
CONDICION DE TERMINO: no hay elementos que imprimir
LLAMADA RECURSIVA f con arreglo de tamaño n-1

**/

#include <stdio.h>
#define DIM 100

void f(int a[DIM],int i, int j){
  if(i>j) //condicion de termino, no hay nada mas que imprimir
    return; 
  else
    printf("%d ",a[i]); // imprime i-esimo elemento
  f(a,i+1,j);  
}

int main(void) {
  int a[DIM];
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  f(a,0,n-1);
  printf("\n");
  return 0;
}