/*
Que son los punteros
son variables en C.
que almacenan direcciones de memoria
*/

#include<stdio.h>

int main(){
  int x; // declaramos una variable
  x=5;
  printf("%d\n",x); // imprime el valor de la variable x
  printf("%p\n",&x); // imprime la direccion de memoria de x
  return 0;
}