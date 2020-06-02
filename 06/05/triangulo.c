/*
Escriba un programa que reciba un entero positivo n que describe el número de filas a mostrar del siguiente patrón:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

Como se puede ver, cada fila i tiene i enteros y cada entero es una unidad mayor que el anterior, empezando desde 1.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
2

Salida a:
1
2 3

Entrada b:
7

Salida b:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
*/

/*
Entrada a:
2

Salida a:
*
* *

Entrada a:
5

Salida a:
*
* *
* * * 
* * * * 
* * * * *
Diseño
entrada:
un entero no negativo, n
salida:
un tirngulo (TRIANGULAR INFERIOR) de n filas
Metodo:
iteracion anidada. 
for. por que sabemos exactamente el numero de iteraciones.

primero, vamos a hacer un cuadrado.
*/

#include <stdio.h>

int main(void) {
  int i,j;
  int n;
  int cont=1;  //baby yoda
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<=i;j++){    
       printf("%d ",cont);  //baby yoda
       cont++;  //baby yoda
    }
    printf("\n");     
  }
  printf("\n");  
  return 0;
}
