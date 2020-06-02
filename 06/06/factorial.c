/*
Escribra un programa que calcule el factorial de un numero entero positivo entregado.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
3

Salida a:
6


Entrada b:
6

Salida b:
720

diseño
entrada: un natural, n
salida, un natural, el facotrial de n
metodo. multiplicar iterativamente los numeros entre 1,2,...,n
usar acumulador, con valor incicial 1. 

*/

#include <stdio.h>

int main(void)
{
  int i, n, resultado;
  
  scanf("%d", &n);
  
  resultado = 1;

  for(i=2;i<=n;i++)
  //for(i=n;i>1;i--)
  {
    resultado = resultado*i;
    printf("%d ",i);
  }

  printf("%d\n", resultado);
}