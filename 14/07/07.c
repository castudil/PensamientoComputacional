/*
Escriba un programa que recorra un arreglo utilizando principios de punteros.
Pista: El "nombre" de un arreglo es un puntero a su elemento inicial.

Entrada:
La entrada corresponde a un entero n [1, 100] que indica el número de elementos a contener, seguido de los n elementos del arreglo.

Salida:
La salida deben ser los elementos del arreglo, en una línea y separados por un espacio.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
6
20 22 24 26 28 30

Salida a:
20 22 24 26 28 30 


Entrada b:
1
5

Salida b:
5 
*/

#include<stdio.h>
#define DIM 100
int main(){
  int n; // le llamo al numero de elementos
  int a[DIM]; // a mis arreglos les llamo a
  int i; // por defecto mis contadroes son i,j,k...
  int *p; // por defectos mis punteros se llaman p, q, r...
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  p=&a[0]; // o equivalentemente p=a;
  printf("%p\n",p);
  printf("%d\n",*p);
  printf("sumamos 1 a p\n");
  printf("%p\n",(p+1));
  printf("%d\n",*(p+1));
  printf("%p\n",(p+2));
  printf("%d\n",*(p+2));
  // aritmetica de punteros
  // que los punteros los sumar!
  // que significa que le sumemos algo a un puntero

/**

[  ]
[ 20 ] a[0]  0x7ffd66d15bb0  
[ 22 ] a[1]
[ 24 ] a[2]
[ 26 ] ...
[ 30 ]
...
[  ] 
[ 0x7ffd66d15bb0 ]  p
[  ]

¿que pasa si le sumamos 1 a un puntero?

(p+1)

**/


for(int *q=&a[0]; q<p+n; q++)
   printf("%d ",*q); // imprime el contenido apuntado por q
printf("\n");

//algo mas... un detalle que casi pasa desapercibido

printf("%p\n",a); // la direccion coincide con la del primer elemento del arreglo

  return 0;
}