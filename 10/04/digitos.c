/**

Escriba un programa que entregue el número de dígitos de un número entero utilizando una función recursiva.
La entrada corresponde al número entero del que hay que determinar su número de digitos.
La salida debe ser el número de digitos del entero entregado.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5

Salida a:
1


Entrada b:
1563

Salida b:
4

estrageia recursiva

<NUEMRO DE DIGITOS> f(int numero_actual){
  procesamiento: truncar el numero actual, elminando MSD, LSD (sacarle un digito), dividir por 10. 
  criterio de termino: resto es cero, hay un solo digito.
  llamada recursiva return 1+f(n/10)
}
**/

#include<stdio.h>

int f(int numero_actual){
  if (numero_actual/10 != 0){
    return 1 + f(numero_actual/10);
  } 
  else return 1;
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",f(n));
  return 0;
}