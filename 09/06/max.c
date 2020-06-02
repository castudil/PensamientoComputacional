/**
Escribra un programa que, utilizando una función, encuentre el valor mayor de un arreglo de enteros.
La entrada corresponde a un n [1,100] que indica el número de elementos del arreglo, seguido de n valores enteros que corresponden al arreglo.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5
19 -5 0 1 5

Salida a:
19


Entrada b:
3
100 1 100

Salida b:
100


METODO:

recorrer sistematicamente el arreglo, y registrando el max. ese valor se retorna.
**/
#include<stdio.h>
#define DIM 100 
/*
recorrer sistematicamente el arreglo, y registrando el max. ese valor se retorna.
*/
int max(int a[DIM],int n){
  int maximo=a[0],i; // el maximo es el primer elemento
  for(i=1;i<n;i++){ // recorrer sistematicamente n elementos
    if(maximo<a[i])
      maximo=a[i];
  }
  return maximo;
}


int main(){
  int i,n,a[DIM];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("%d\n",max(a,n));  
  return 0;
}
