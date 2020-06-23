/**
Escriba un programa que entregue la suma de los primeros n números naturales.
La entrada corresponde al entero n (n >= 1).
La salida debe ser la suma de los primeros n números naturales.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3

Salida a:
6


Entrada b:
1000

Salida b:
500500

entrada
3
salida 
1+2+3

en el caso de 1000, la soliucion seria 1+2+3+...+999+1000


para resolver de manera recursiva, debemos esspecificar lo siguiente

funcion rerusiva
condicion de termino
procesamiento

llamada original, tendra el parametro n, que es el termino maximo



llamada
f(n)
definicion

f(x){
  SUMAR ACUM + Nuevo Termino
}

**/


#include<stdio.h>

int f(int x){
  if(x!=0){
    return x + f(x-1); 
     // f(3) _> 3 + f(2) = 3 + 3 = 6
     // f(2) -> 2 + f(1) = 2 + 1 = 3
     // f(1) -> 1 + f(0) = 1 + 0 = 1
     // f(0) -> 0
  }
  else
    return 0;
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",f(n));
  return 0;
}

