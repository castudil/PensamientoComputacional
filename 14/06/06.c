/*
Escribra un programa que entregue el número mayor entre dos números enteros, comparándolos utilizando punteros.

Entrada:
La entra corresponde a los dos enteros a comparar.

Salida:
La salida debe ser el número mayor, obtenido comparando los valores de las variables enteras mediante punteros.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3 7

Salida a:
7


Entrada b:
24 12

Salida b:
24
*/

#include<stdio.h>

int main(){
  int x,y;
  int max;
  int *p;
  scanf("%d %d",&x,&y);
  p=&x; // p apunta a x
  max=*p; // max almacena valor de x
  p=&y; // p apunta a y
  if(max<*p) // comparo con y
    max=*p; // encontramos un nuevo maximo
  printf("%d\n",max);  
  return 0;
}
