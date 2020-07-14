/**

Escriba un programa que sume dos números enteros utilizando una función que llame por referencia.

Entrada:
La entrada corresponde a los dos números enteros a sumar.

Salida:
La salida debe ser el resultado de la suma, obtenido a partir de una función que llama por referencia.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5 -5

Salida a:
0


Entrada b:
3 7

Salida b:
10

**/

#include <stdio.h>

// c es un puntero, revise la direccion de memoria de una variable
// en nuestro caso recibe la direccion de sum
void sumaPorReferencia(int *c,int a, int b)
{
  *c = a + b;// calcula la suma y almacena en la direccion apuntada por c que es la variable sum.
}

void cuadrado(int c){
  c=c*c; // calculamos el cuadrado
}// c es una variable local, que muere con la funcion

int main(void) 
{06.c

  int a, b;
  int sum; // a sum no le asigno nada

  scanf("%d %d", &a, &b); // a y b se leen de teclado

  //pasamos la direccion de memoria de sum
  sumaPorReferencia(&sum,a, b); // aqui esta la magia


  printf("%d\n", sum); // sum muestra la SUMA! magia!

  cuadrado(sum);

  printf("%d\n", sum); // sum muestra la SUMA! magia!
  
  return 0;
}