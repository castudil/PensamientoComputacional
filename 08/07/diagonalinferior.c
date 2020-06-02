/*
Escriba un programa que entrege la triangular inferior de una matriz cuadrada.
La entrada corresponde a un entero n [1,10], que representa el número de filas y columnas de la matriz. Luego vienen n lineas donde cada una tiene n números enteros, que corresponden a los elementos de la matriz.
La salida debe ser la misma matriz, pero los elementos que no pertenezcan a la triangular inferior se deben mostrar como 0.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3
1 4 3
5 2 2
5 5 3


Salida a:
1 0 0 
5 2 0 
5 5 3 


Entrada b:
7
0 1 3 4 8 9 -1
0 1 3 4 8 9 -1
0 1 3 4 8 9 -1
0 1 3 4 8 9 -1
0 1 3 4 8 9 -1
0 1 3 4 8 9 -1
0 1 3 4 8 9 -1

Salida b:
0 0 0 0 0 0 0 
0 1 0 0 0 0 0 
0 1 3 0 0 0 0 
0 1 3 4 0 0 0 
0 1 3 4 8 0 0 
0 1 3 4 8 9 0 
0 1 3 4 8 9 -1 
*/

#include <stdio.h>

#define DIM 10  // declarar constante

int main(void) {
  
  int a[DIM][DIM]; // ,matrix
  int i,j; //contadores
  int n;

  scanf("%d",&n);

  for(i=0;i<n;i++){//leer variables
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  } 

  for(i=0;i<n;i++){ //desplegar matriz
    for(j=0;j<n;j++){
      if(i>=j)
        printf("%d ",a[i][j]);
      else
        printf("0 ");
    }    
    printf("\n");
  }
  
  return 0;
}