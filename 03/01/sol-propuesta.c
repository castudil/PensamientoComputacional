#include<stdio.h>

/* cuando usamos libreria matematica,
es necesario agregar la opcion -lm en el llamado a gcc
que significa libreria (l) matematica (m)
*/
#include<math.h>

/*
hipotenusa a traves de pitagoras
c=sqrt(a*a + b*b)

area
area=cateto1*cateto2/2

perimetro
perimetro= cateto1 + cateto2 + hipotenusa
*/

int main(){
  float a,b;
  float c;
  scanf("%f",&a);
  scanf("%f",&b);
  c=sqrt(a*a + b*b);
  printf("%f ",c);
  printf("%f ",a*b/2);
  printf("%f\n",a + b + c);
}