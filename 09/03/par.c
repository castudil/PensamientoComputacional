#include <stdio.h>

/*Escriba un programa que determine si un numero entero es par o no utilizando una función. Si se determina que es par, imprima PAR, sino, IMPAR.
Recordar: Salto de linea final (ej: printf("output\n");)
Entrada a:
0
Salida a:
PAR
Entrada b:
11
Salida b:
IMPAR
*/ 

/**
fuancion que retorna 1 si el numero es par y 0 en caso contario
**/
int es_par(int x){
  if(x%2==0){
    return 1; //PAR
  }else{
    return 0; //IMPAR
  }
}

int main(void) {
  int a;
  scanf("%d",&a);
  if(es_par(a)==1){
    printf("PAR\n");
  }
  else{
    printf("IMPAR\n");
  }
  return 0;
}