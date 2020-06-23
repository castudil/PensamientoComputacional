#include<stdio.h>


void conteo(int x){
  printf("%d\n",x); // procesamiento
  if(x==1){ //condicion de termino
   return; //sale de la funcion
  }
  else // si no se alcanza la condicion de termino, entonces sigamos trabajando
  {
    conteo(x-1);//hacer el problema mas simple. siempre un paso mas simple,
  }
}

int main(){
 conteo(10);
 return 0;
}