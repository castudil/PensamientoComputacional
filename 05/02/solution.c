/*
Diseño de la solucion

1.- entrada - 

3 numero enteros

2.- salidas - 

numero mayor de los ingresados
3.- Método

tres comparaciones

4.- Casos de prueba 

Entrada a:
34 25 80
Salida a:
80
Entrada b:
50 50 50
Salida b:
50

5.- Investigacion - NA


*/

#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
  {
    printf("%d\n",a);
  }
else
  {
  if(b>c)
    {
      printf("%d\n",b);
    }
  else   
      printf("%d\n",c);
  }
}