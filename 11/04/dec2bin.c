/*
Escriba una programa que convierta un número decimal a binario utilizando una función recursiva.
La entrada corresponde al entero n a convertir.
La salida deben ser el valor n en binario.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5

Salida a:
101


Entrada b:
19

Salida b:
10011 

Estrategia:

el numero original debemos divirlo por 2 de manera sistematica

por ejemplo

5/2 = 2
5%2 = 1  -> digito binario que andamos buscando

el problema es que ese digito va al FINAL del numero binario (descubrimos el ultimo digito)

tomamos el resultado de la divsion (en este caso 2), y repetimos el proceso (recursivamente)

2/2 = 1
2%2 = 0  -> obtenemos el sigueinte digito

1/2 = 0
1%2 = 1  -> obtenemos el siguiente digito.

temirnamos la ejecucion, por que? porque n es cero.
101

arreglos?

Definir en el main. pasarlo como parametros, pasaje por referencia.

Enteros, calculos respectivos
Acumulamos solucion utilizando ptencias de 10, para almacenar el numero binario en una variable entera que guarda valores decimales.
* devolver un valor entero
* proceso de divsiones recursivas
* condicion de termino, n==0
* acumular, considerando potencias de 10 que van en incremento.


*/

int transformar(int n,int potencia, int acum){
  if(n!=0){
    return transformar(n/2,potencia*10,acum + n%2*potencia);
  }
  else
    return acum;
}

/**
llamada intermedia que encapsula valores internos del algoritmo
**/
int dec2bin(int n){
    return transformar(n,1,0);
}

#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",dec2bin(n));
  //printf("%d\n",transformar(n,1,0));
  return 0;
}