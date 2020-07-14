/*
Simran desea subir una escalera de N peldaños, y puede subir de a 1 peldaño, 2 peldaños o 3 peldaños por paso. Usted debe determinar de cuántas maneras puede Simran subir las escaleras.

Entrada:
La entrada corresponde al entero N [1, 30] que representa al número de peldaños.

Salida:
La salida debe ser un entero que indique el número de combinaciones con que Simran podría subir las escaleras, es decir, llegar exactamente a N peldaños subidos.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
4

Salida a:
7


Entrada b:
10

Salida b:
274 
cuand

o hay 4 peldaños hay 7 formas de subir las escaleras de tal manera que sumen 4.
las siete formas son las siguientes.
1 1 1 1
1 1 2
1 2 1
1 3
2 1 1
2 2
3 1

0 
0 -> 1 
0 -> 1 -> 1 
0 -> 1 -> 1 -> 1 
0 -> 1 -> 1 -> 1 -> 1 (EXITO) rertorna 1
0 -> 1 -> 1 -> 1 -> 2 (fracaso) retorna 0
0 -> 1 -> 1 -> 1 -> 3 (fracaso) retorna 0
0 -> 1 -> 1 -> 2      (EXITO) retorna 1
0 -> 1 -> 1 -> 3      (fracaso) retorna 0
0 -> 1 -> 2 
0 -> 1 -> 2 -> 1      (EXITO) retorna 1
0 -> 1 -> 2 -> 2      (fracaso) retorna 0
0 -> 1 -> 2 -> 3      (fracaso) retorna 0
0 -> 1 -> 3           (EXITO) retorna 1
0 -> 2
0 -> 2 -> 1
0 -> 2 -> 1 -> 1      (EXITO) retorna 1
0 -> 2 -> 1 -> 2      (fracaso) retorna 0
0 -> 2 -> 1 -> 3      (fracaso) retorna 0
0 -> 2 -> 2           (EXITO) retorna 1
0 -> 2 -> 3           (fracaso) retorna 0
0 -> 3 
0 -> 3 -> 1           (EXITO) retorna 1
0 -> 3 -> 2           (fracaso) retorna 0
0 -> 3 -> 3           (fracaso) retorna 0
*/


#include <stdio.h>

/**

escaleras: funcion recursiva que analiza todas las posiblidades

numero_total_de_peldanos: en la cantidad de peldaños de la escalera
suma_actual : mantiene la suma actual de los peldaños subidos hasta el momento

**/
int escaleras(int numero_total_de_peldanos, int suma_actual)
{
	if (suma_actual == numero_total_de_peldanos)
    	return 1; // exito
  
	if (suma_actual > numero_total_de_peldanos)
		return 0; // fracaso
	
	return escaleras(numero_total_de_peldanos,suma_actual + 1) +
			escaleras(numero_total_de_peldanos,suma_actual + 2) +
			escaleras(numero_total_de_peldanos,suma_actual + 3);

}

int main()
{
	int numero_total_de_peldanos;
	scanf("%d", &numero_total_de_peldanos);	//numero de peldalos entre 1 y 30.		
	printf("%d\n", escaleras(numero_total_de_peldanos,0));
}