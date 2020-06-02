/**
Escriba un programa que reciba un número real y entregue su cuadrado utilizando una función.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
2

Salida a:
4.000000


Entrada b:
-0.5

Salida b:
0.250000
*/

/**
entrada
x, float
salida
x*x, el cuadrado demla entrada
**/

#include<stdio.h>


float cuadrado(float x){
  return x*x;
}


int main()
{
  float x;
  scanf("%f",&x);
  /*se asume que el tipo de dato de una funcion es el tipo de retorno*/
  printf("%f\n",cuadrado(x)); 
}