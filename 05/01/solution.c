/*
Diseño de la solucion

1.- entrada - OK

numero entero

2.- salidas - OK

texto (PAR o IMPAR) 
no olvidar salto de linea \n al final

3.- Método

Aplicar operacion modulo % 2
si el resto es 0 -> PAR
si el resto es 1 (else) -> IMPAR


4.- Casos de prueba - OK

5.- Investigacion - NA

*/

#include<stdio.h>

int main()
{
int x;
scanf("%d",&x);
if(x%2==0)
  {
    printf("PAR\n");
  }
else
  {
    printf("IMPAR\n");
  }
}