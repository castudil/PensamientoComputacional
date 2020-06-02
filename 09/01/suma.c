/**
Escriba un programa que sume dos numeros enteros utilizando una función.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
2 3

Salida a:
4


Entrada b:
-5 5

Salida b:
0
**/

#include <stdio.h>

int suma(int a, int b){
  int suma;
  suma=a+b;
  return suma;
}


int suma2(int x, int y){
  int suma;
  suma=x+y;
  return suma;
}

int suma3(int x, int y){
  return x+y;
}

int main(void) {
  int a,b;
  int sum;
  scanf("%d",&a);
  scanf("%d",&b);
  sum=suma3(a,b);
  printf("%d\n",sum);
  return 0;
}