#include<stdio.h>

int main(){
  int x; // declaramos una variable, internamente se asigna un direccion
  scanf("%d",&x); // leemos un valor y lo almacenamos en la direcicon de memoria de x
  printf("el valor de x es %d\n",x); // imprime el valor de la variable x
  printf("la direccion de memoria de x es %p\n",&x); // imprime la direccion de memoria de x
  return 0;
}