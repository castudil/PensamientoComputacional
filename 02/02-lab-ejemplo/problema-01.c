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

#include <stdio.h>

int main()
{
float precio_neto, precio_coste, margen;
/* Entrada de datos: precio_coste y margen */ 
//printf ("Cual es el precio de coste?");
scanf ("%f", &precio_coste);
//printf ("Cual es el margen?");
scanf ("%f", &margen);
/* Proceso: calculo del precio neto */ precio_neto=precio_coste*(100+margen)/100;
/* Salida de datos */
//printf ("El precio neto de este producto es de %f euros\n", precio_neto);
printf ("%.2f\n", precio_neto);
}