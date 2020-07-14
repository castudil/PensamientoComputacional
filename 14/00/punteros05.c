#include<stdio.h>

int main(){

  int a;
  int b;
  int *p; // es un puntero a enteros
  int aux;
  a=8;
  b=9;
  p=&a;// apunta a la direccion de a
  aux=*p; //almaceno contenido apuntado por p, 8 en este caso
  p=&b; // p apunta a b
  a=*p; // en a guardamos el contenido de p., 9 en este caso
  p=&aux; // apuntamos a la direccion de memoria de aux
  b=*p; // guardamos el contenido de la direccion de memoria almacenado por p
  printf("el valor de a es %d\n",a);
  printf("el valor de b es %d\n",b);
  return 0;
}