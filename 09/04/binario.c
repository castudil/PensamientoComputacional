/*
Escriba una programa que reciba un número natural y, utilizando una función, entregue su representación en binario.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5

Salida a:
101


Entrada b:
65


Salida b:
1000001
*/

#include<stdio.h>
/**
long es untipo de datos especial de C, que permite almacenar un alto rango de enteros.
**/
long aBinario(int numDec)
{
  /**
 1   <- orden incial, Bit menos significativo
2
4 
8 
16 
32
etc. 
  **/
  long numBin = 0; //acumulador
  long orden = 1; //importante que el orden parte de uno
  int resto;

  while(numDec != 0)
  {
    resto = numDec % 2; // par o impar
    numBin = numBin + resto * orden; // acumulador
    orden = orden * 10;
    numDec = numDec / 2;
  }
  return numBin;
}

int main(void)
{
  long numBin;
  int numDec;

  scanf("%d",&numDec);

  numBin = aBinario(numDec);
  printf("%ld\n",numBin);
}