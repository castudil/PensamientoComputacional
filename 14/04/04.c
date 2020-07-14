/**
Escriba una programa que sume los valores de dos variables enteras accediendo a estos mediante punteros.

Entrada:
La entrada corresponde a los dos enteros a almacenar en las dos variables.

Salida:
La salida debe ser la suma de los valores, pero accediendo a ellos mediante punteros.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5 6

Salida a:
11


Entrada b:
-5 5

Salida b:
0
**/

#include<stdio.h>

int main(){
  int x,y;
  int z; 
  int *p; // puntero a entero
  scanf("%d %d",&x,&y);
  p=&x;// p apunte a la direcciond e memoria de x
  z=*p; // copiando el contenido de la direccion de memoria
  p=&y; //p apunta a y
  z=z+*p; // le sumamos el contenido de p (que es el valor almacenado en y)
  printf("%d\n",z);
  return 0;
}