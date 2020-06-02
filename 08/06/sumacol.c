/*
Escriba un programa que entrege la suma de los elementos de cada fila y columna de una matriz.
La entrada corresponde a dos enteros n y m [1,10], que representa el número de filas y columnas de la matriz. Luego vienen n lineas donde cada una tiene m números enteros, que corresponden a los elementos de la matriz.
La salida debe ser la suma de los elementos de cada fila y de cada columna. En una primera fila entregue las sumas resultantes de las filas, y en una segunda fila las sumas resultantes de las columnas.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3 3
1 0 0
0 2 0
0 0 3


Salida a:
1 2 3 
1 2 3 


Entrada b:
3 4
10 5 7 8
-1 6 3 4
20 -9 5 1

Salida b:
30 12 17 
29 2 15 13 
*/

/*
entrada
n filas
m conlumnas
nxm elementos de la matrizmatriz
salida
n numeros, correspondientes a las sumas de cada fila
m numeros correspondientres a las sumas de cada columna.

elemento complejo.
como sumamos las filas??
*/


#include <stdio.h>

#define N 10
#define M 10


int main(void) {
  int n;//filas
  int m;//col
  int i,j;//indices para recorrer la matriz
  int suma=0;
  int a[N][M];//matriz
  
  scanf("%d", &n);//Leer las filas
  scanf("%d", &m);//Leer las col
    
  for(i=0;i<n;i++){//ciclo para recorrer la matriz
    for(j=0;j<m;j++){//for anidado, matriz nXm
      scanf("%d",&a[i][j]); //leer 
    }
  }
  
  for(i=0;i<n;i++){
    suma=0;//resetea el acumulador
    for(j=0;j<m;j++){
      suma=suma+a[i][j];//suma filas
    }
    printf("%d ",suma);//suma de la fila actual
  }
  printf("\n");

  for(j=0;j<m;j++){
    suma=0;//resetea el acumulador
    for(i=0;i<n;i++){
      suma=suma+a[i][j];//suma col
    }
    printf("%d ",suma);//suma de la columna actual
  }
  printf("\n");
}
 

