#include<stdio.h>

// problema... contar de 1 a n


void conteo(int actual, int fin){
  printf("%d\n",actual); // procesamiento
  if(actual==fin){ //condicion de termino
   return; //sale de la funcion
  }
  else // si no se alcanza la condicion de termino, entonces sigamos trabajando
  {
    conteo(actual+1,fin);//hacer el problema mas simple. siempre un paso mas simple,
  }
}


int main(){
int n=10;
conteo(1,n);
return 0;
}