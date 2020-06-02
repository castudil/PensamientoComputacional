/*
Escriba un programa que encuentre la transpuesta de una matriz.
La entrada corresponde a dos enteros n y m [1,10], que representan el número de filas y columnas de la matriz correspondientemente, seguido de nxm números enteros que corresponden a los elementos de la matriz.
La salida debe ser a la transpuesta de la matriz original, donde cada fila corresponde a una linea y los elementos de cada fila están separados por un espacio.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3 2
1 2
3 4
5 6


Salida a:
1 3 5 
2 4 6 


Entrada b:
1 4
9 8 7 6

Salida b:
9 
8 
7 
6

Diseño:

Entradas: dos enteros que representan la cantidad de filas y columnas de la matriz, respectivamente. Luego se deben introducir los elementos de las matrices.
 
Salidas: La matriz original transpuesta.

Metodo: Intercambiar las dimensiones de la matriz para transponerla.
*/


#include <stdio.h>

#define DIM 10

int main(void) {
  int n;//filas
  int m;//columnas
  int i,j;//coordenadas para recorrer la matriz

  int a[DIM][DIM];//matriz
  
  scanf("%d", &n);//Leer las filas
  scanf("%d", &m);//Leer las columnas

      
  
  for(i=0;i<n;i++){//ciclo para recorrer la matriz
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);//Ingreso de variables mediante coordenadas
    }
  }
  
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    
      // AQUI TRANSPUESTA   
      // URL 
      // https://www.geogebra.org/m/mafmgjpd
      printf("%d ",a[j][i]);
      }
       printf("\n");
    }

    printf("\n");
}
 








