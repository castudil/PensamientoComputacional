/*Escriba un programa que muestre la tabla de múltiplicación hasta el 10 de un entero entregado.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
8

Salida a:
8
16
24
32
40
48
56
64
72
80

Entrada b:
11

Salida b:
11
22
33
44
55
66
77
88
99
110
*/

/*
diseño
entrada, un entero no negativo
salida, la tabla del 10 del numero ingresado
metodo: iteracion. de 1 a 10. donde se multiplica el numero ingresado por el valor del contador actual y el resultado se imprime en pantalla.
*/

#include <stdio.h>

int main(void) {
  int i;
  int n;
  scanf("%d",&n);
  for(i=1;i<=10;i++){
    printf("%d\n",i*n);
  }
  return 0;
}