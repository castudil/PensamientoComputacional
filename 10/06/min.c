/**
Escriba una programa que lea  un arreglo de n elementos 1=<n<=100 utilizando una función recursiva. el programa devuelve el valor minimo contenido en el arreglo.

La entrada corresponde a un entero n [1,100], seguido de n números enteros que corresponden a los elementos del arreglo.


Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
5
1 2 3 4 5

Salida a:
1 


Entrada b:
1
5

Salida b:
5 

Entrada b:
6
324 65 34 87 34 234

Salida b:
34 

**/
/**
Diseño: 
entrada: un arreglo de n elementos ( 1 =< n <= 100 )
salida: el valor minimo del arreglo
metodo: 




**/

#include <stdio.h>

#define DIM 100

int f(int a[DIM],int menor, int i, int j){ 
      if(menor>a[i]){
        menor=a[i];
        //printf("menor= %d\n",menor); 
      }
      if(i!=j){
        return f(a,menor,i+1,j);
      }else
        return menor;
}
        
    
int main(){
    int n,i=0;
    int a[DIM];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int menor=a[0];
    printf("%d\n",f(a,menor,0,n-1));
    return 0;
}