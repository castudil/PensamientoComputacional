/*
Escriba un programa que, utilizando una función, determine si un número natural es de Armstrong o no.
De serlo, indiquelo con ARMSTRONG, sino, NO.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
153

Salida a:
ARMSTRONG


Entrada b:
9

Salida b:
ARMSTRONG


Que es un numero de armstrong:

Defincion (Armstrong): 

Un número de n dígitos es un número de Armstrong si es igual a la suma de las n-ésimas potencias de sus dígitos. Por ejemplo, 371, 8208 y 4210818 son números de Armstrong ya que

       371 = 3^3 + 7 + 1³ y  
      8208 = 8^4 + 2^4 + 0^4 + 8^4 
   4210818 = 4^7 + 2^7 + 1^7 + 0^7 + 8^7 + 1^7 + 8^7

   Entrada
   n, entero
   salida:
   ARMSTRONG/NO
*/


#include<stdio.h>
#include <math.h>

//firma de las funcion por venir
double calcular_numero_de_digitos(int);  

/*
devuelve 1 si el numero n es un numero de armstrong y 0 en otro caso.
*/
int es_armstrong(int n){
  int resto=n; // lo que nos queda del numero
  int digito;
  int suma=0; // acumulador

  //log_10 n = digitos
  // n=5  -> log_10 (5) -> 10^0 =1 , 10^1 =10 , por lo tanto 
  // 10^0 < log_10 (5) < 10^1
  // operacion techo(log_10 (n)), me dice directamente cuantos digitos tiene

  double exponente=calcular_numero_de_digitos(n); // calcula la cantidad de digitos

  while(resto!=0){
    digito=resto%10; // digito entre 0 y 9   , ejempplo 347 -> desprendo 7
    resto=resto/10; // para obtener lo que queda, ejemplo 347 -> desprendo 34
    suma=suma+pow(digito,exponente); // sumo expresion para digito menos significativo
  }

  if (suma==n) // definicion de numero de armstrong
    return 1;
  else
    return 0;
}

/*
calcula el numero de digitos de un numero decimal
*/
double calcular_numero_de_digitos(int n){
  return ceil(log10((double)n)); 
}

int main(){
  int n; // variable para entrada
  scanf("%d",&n); // leer n 

  
  if(es_armstrong(n)) // ver si es armstrong
    printf("ARMSTRONG\n"); 
  else
    printf("NO\n");
  

  //printf("%.0f\n",calcular_numero_de_digitos(n));

  return 0;
}