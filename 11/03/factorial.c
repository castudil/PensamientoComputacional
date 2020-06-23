/*
Factorial de un numero, de manera recursiva

Escriba un programa que entregue el factorial de un número natural utilizando una función recursiva.
La entrada corresponde al natural n.
La salida deben ser el factorial del número n. 

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5

Salida a:
120


Entrada b:
1

Salida b:
1



Estrategia

n! = n * (n-1)!

denotar como funcion

f(n)= n * f(n-1)

ejemplo

f(5) = 5 * f(4)
f(4) = 4 * f(3)
f(3) = 3 * f(2)
f(2) = 2 * f(1)
f(1) = 1  // definicion, condicion de termino


*/


#include<stdio.h>

int factorial(int n){
  if(n!=1){
    return n * factorial(n-1);
  }
  else{
    return 1;
  }
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",factorial(n));
  return 0;
}