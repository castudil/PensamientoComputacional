/*Escriba un programa que reciba un conjunto de enteros, y luego inserte un entero al final de ellos.
La entrada corresponde a un entero n [1,99] seguido de n enteros. Luego, se entrega el valor entero a insertar.
La salida debe ser el conjunto con el nuevo elemento insertado al final.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
4
5 10 11 24
8

Salida a:
5 10 11 24 8


Entrada b:
6
1 1 2 2 3 3
2

Salida b:
1 1 2 2 3 3 2

DISEÑO

Entrada
n, entero, largo del arreglo
n numeros enteros, datos del arrreglo
x, entero a agregar al arreglo

salida:
nuevo arreglo

metodo
leer arreglo
leer nuevo valor
agregar al final
imprimir

*/

#include <stdio.h>
#define SIZE 100

int main(void) {
  int a[SIZE];//arreglo
  int n,x;
  int i;//contador 
  //lectura de los datos
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  scanf("%d",&x);//leemos nuevo valor

  a[n]=x;
  n++;  // equivalente a n=n+1

for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}