/*Se tiene un dado (6 caras), que se lanzará n veces. Escriba un programa que registre el número de veces que cae cada cara del dado y luego muestre el número de veces que cayeron las caras obtenidas, respectivamente.

La entrada corresponde a un entero positivo n [1,100]. 

Para la salida se debe mostrar el número de ocurrencias de las caras obtenidas, una linea por cara, en el formato "C O", donde C corresponde a la cara y O al numero de ocurrencias. Además, se deben mostrar en el orden ascendente con respecto del número de la cara.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5


Salida a:
1 1
2 1
3 1
4 2
5 0
6 0

Entrada b:
8


Salida b:
1 0
2 0
3 0
4 0
5 8
6 0
*/

/*
Diseño

Entrada:
numero n que indica el numero de lanzamientos
salida:
tabla de frecuencia que indica cuantas ocurrencias se obtivieron de cada cara del dado. una por linea.

metodo.

leer n. (entero)

lanzar un dado. numero seudo aleatorio. en c se hace un un random. [1,6]

TODO: averdiguar como funcionan los numero aleatorios en C

un ciclo repite n lanzamientos

mantener un arreglo de 6 elementos para registrar el numero de ocurrencias

*/



#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int n; // numero de lanzamientos
  int r;// numero aleatorio
  int i;//contador
  int freq[7]; // tabla de frecuencias
  scanf("%d",&n);
  
  srand(time(NULL));   // Initialization, should only be called once.
 //srand(500);


  for(i=1;i<=6;i++){
    freq[i]=0;
  }

  for(i=0;i<n;i++){
  r = rand()%6+1; // Returns a pseudo-random integer between 0 and RAND_MAX.
  //printf("%d\n",r);
  freq[r]=freq[r]+1;
  }
  
  for(i=1;i<=6;i++){
    //printf("%d\t%d\t%.4f\n",i,freq[i],(float)freq[i]/n);
    printf("%d %d\n",i,freq[i]);
  }
return 0;
}

