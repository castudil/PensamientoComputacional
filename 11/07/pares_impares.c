/*
Escriba un programa que , utilzando una función recursiva, imprima los números pares y los números impares de un rango dado.
La entrada corresponde a dos enteros positivos n y m que describen el rango, n < m.
La salida deben ser dos lineas, en la primera los números pares del rango y en la segunda los impares. Los valores de cada linea deben estar separados con un espacio entre ellos.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
20 30

Salida a:
20 22 24 26 28 30 
21 23 25 27 29 


Entrada b:
1 5

Salida b:
2 4 
1 3 5 

Estrategia

dos implementaciones en una. dos funciones recursivas. una para pares, las segunda para los impares.

por lo tanto basta con implementar una. la otras es gratis.

pienso que podemos reciclar la funcion anterior.

*/

#include<stdio.h>

void par(int n,int m){
  if(n<=m){ // condicion de termino n>m
    if(n%2==0)
      printf("%d ",n); // proceso
    par(n+1,m); //llamado recursivo
  }
}

void impar(int n,int m){
  if(n<=m){ // condicion de termino n>m
    if(n%2==1)
      printf("%d ",n); // proceso
    impar(n+1,m); //llamado recursivo
  }
}

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  par(n,m);
  printf("\n");
  //falta impares
  impar(n,m);
  printf("\n");
  return 0;
}
