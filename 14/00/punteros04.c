#include<stdio.h>

int main(){
int x;
int y;
int *p; 

x=5;// x es capaz de almacenar enteros, adingamos 5 que es un entero
// peras con peras! OK

//p almacena direcciones de memoria
//almacenasmos la direccion de memoria de x
//manzanas con manzanas
p= &x; // p guarda la direccion de memoria de x

//imprimimos el CONTENIDO (operador *) de la celda apuntada por p
printf("el valor apuntado por p es %d\n",*p); // 5

////manzanas con manzanas
// p almacena direcciones de memoria
// &y es una direccion de memoria
//OK
p=&y;

//peras con peras
// *p lo que contienes direccione de memoria que almacenan ENTEROS
// asingamos 7 que e sun ENTERO, por lo tanto OK
*p=7   ;//vamos a escribir en la celda y


printf("el valor apuntado por p es %d\n",*p); // 7
printf("el valor de y es %d\n",y); // 7


  return 0;
}