#include <stdio.h>

#define DIM 3  // declarar constante

int main(void) {
  
  int a[DIM][DIM]; // ,matrix
  int i,j; //contadores
  
  for(i=0;i<DIM;i++)//leer variables
    for(j=0;j<DIM;j++)
      scanf("%d",&a[i][j]);
  
  for(i=0;i<DIM;i++){ //desplegar matriz
    for(j=0;j<DIM;j++)
      printf("%d ",a[i][j]);    
    printf("\n");
  }
  
  return 0;
}