/*
Una empresa de venta de recambios de automóviles necesita un programa que calcule y muestre el precio final en pesos de un producto. Para ello, se debe aplicar la siguiente fórmula:
precio_neto = precio_costo * ( 100 + margen) / 100
El precio de costo en pesos y el margen en tanto por ciento que desea obtener la empresa para el producto se introducirán por teclado.

casos de prueba

entrada
200
.1
salida
200.20

entrada
100
0.1
salida
100.10

entrada
10000
.15
salida
10015.00

*/

/* estrategia
resolver fomrula, dos datos  (reales, float) desde teclado
*/

#include<stdio.h>

main()
{
  float precio_costo;
  float margen;
  float precio_neto;
  scanf("%f",&precio_costo);
  scanf("%f",&margen);
  precio_neto = precio_costo * ( 100 + margen) / 100;
  printf("%.2f\n",precio_neto);
}

