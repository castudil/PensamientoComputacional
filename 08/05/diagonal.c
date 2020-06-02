/*
Escriba un programa que entrege la suma de los elementos pertenecientes a la diagonal principal de una matriz cuadrada.
La entrada corresponde a n [1,10], que representa el número de filas y columnas de la matriz, seguido de nxn números enteros que corresponden a los elementos de la matriz.
La salida debe ser la suma de los elementos de la diagonal principal de la matriz.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3
1 0 0
0 1 0
0 0 1


Salida a:
3


Entrada b:
1
5

Salida b:
5

entrada:
matriz nXn
salida
numero entero, suma de las diagonales
Metodo:

contador=0
recorrer matriz, elementos de la diagonal (i,i) y sumarlos


*/



#include <stdio.h>

#define DIM 10

int main(void) {
  int n;//filas
  int i,j;//coordenadas para recorrer la matriz
  int suma=0;
  int a[DIM][DIM];//matriz
  
  scanf("%d", &n);//Leer las filas
 
      
  
  for(i=0;i<n;i++){//ciclo para recorrer la matriz
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);//Ingreso de variables mediante coordenadas
    }
  }
  
  for(i=0;i<n;i++){
    suma=suma+a[i][i];
  }

    printf("%d\n",suma);
}
 