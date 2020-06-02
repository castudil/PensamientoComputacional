/*
Escriba un programa que separe un conjunto de enteros en dos arreglos, uno que contega los números pares y otro que contenga los impares.
La entrada corresponde a un entero n [1,100] seguido de n valores enteros a separar.
La salida corresponde a los arreglos separados, donde cada uno debe estar en una linea distinta, primero los pares y luego los impares.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
4
1 2 3 4

Salida a:
2 4
1 3


Entrada b:
7
11 21 31 41 51 61 71

Salida b:

11 21 31 41 51 61 71

DISEÑO

entrada:
n, numero de elemento a leer
n numeros enteros.
salida:
dos listas, una con los pares y otra con los impares

metodo
leer arreglo.
crear 2 arreglos.
copiar pares a un arreglo e impares al otro arreglo
imprimir

*/



#include<stdio.h>

int main(){
  int n; // numero de elementos
  int i;//contador
  int a[100]; //los elementos 
  int par[100]; // lista de pares
  int impar[100]; // lista de impares
  int j=0,k=0; //contadores de pares e impares, respectivamente  
  scanf("%d",&n);//leer cantidad de elementos
  
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);//leer los numeros
  }
  


  for(i=0;i<n;i++){
    //printf("%d ",a[i]);//leer los numeros
    if(a[i]%2==0){ //numero par
      par[j]=a[i];
      j++;
    }
    else{ //impar
      impar[k]=a[i];
      k++;
    }
  }
 
  for(i=0;i<j;i++){//imprimir pares
    printf("%d ",par[i]);
  }
printf("\n");


  for(i=0;i<k;i++){//imprimir pares
    printf("%d ",impar[i]);
  }
printf("\n");


} 
  