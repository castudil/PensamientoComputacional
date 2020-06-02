/*
Escriba un programa determine, utilizando una función, si un numero natural es primo o no. De serlo, indicarlo con PRIMO, sino, NO PRIMO.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5

Salida a:
PRIMO


Entrada b:
12

Salida b:
NO PRIMO
*/

/*

entrada
n, entero
salida
frase, PRIMO/NO PRIMO
metodo
Recorrer de manera sistematica los naturales desde 2 hasta n/2, buscandos divisores.
*/
#include<stdio.h>
/**
true (1) si el numero es primo
false (o) si el numero no es primo
**/
int es_primo(int n){
  int i;
  for(i=2;i<=n/2;i++) // forma menos tipica de usar un for
      // vamos a buscar un cotraejemplo
      // si encontramos un divisor ya sebos que no es primo
      if(n%i==0) //si no hay resto entonces es divisor!
        return 0; // retorna de inmedianto y termina la ejecucion de la funcion!
  return 1; // es primo por que nunca encontramos un divisor!
}


int main(){
  int n;
  scanf("%d",&n);
  //O para C es FALSE, 1 para C es TRUE. en realidad cualquier cosa 
  // distinto de cero, para C es TRUE. En particular 1 es verdadero.
  if(es_primo(n))
    printf("PRIMO\n"); // no tengo llaves, el bloque solo tiene 1 instruccion
  else
    printf("NO PRIMO\n");
return 0;
}
