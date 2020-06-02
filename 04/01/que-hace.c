#include<stdio.h>
/**
Que hace el programa

**/

int main() {
  int x=7; // variable para algo... documentar, valor inicial
  int y; 
  y=-2+x; // se definen dos variable. valor 5
  printf ("%d\n", y); // imprimir 5
  y=y+2; // 7
  printf ("%d\n", y); // 7
  y=(y==x); // que pasa aca? 1 --- verdadero
  printf ("%d\n", y); // 1
  y++; // significa  y=y+1    ... y--  y=y-1    ... y+=2 ->  y=y+2
  printf ("%d\n", y);//2
  return 0;
}


/*
5
7
1
2

*/

//OK nuestras prediccion fueron exitosas.