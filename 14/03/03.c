/**
Escriba un programa que entregue el valor y dirección de distintos tipos de variables. Para esto utilice tanto los operadores "&" y "*" como variables punteros.

Declare las variables:
 - Variable entero ent
 - Variable caracter car
 - variable flotante flt
 - Varieble puntero a entero pEnt
 - Varieble puntero a caracter pCar
 - Varieble puntero a flotante pFlt

El programa debe:
 - Leer y asignar valores a "ent", "car" y "flt"
 - Asignar las direcciones de variable a su puntero respectivo.
 - Mostrar el valor de "ent", "car" y "flt" 
 - Mostrar la dirección de "ent", "car" y "flt" utilizando el operador "&"
 - Mostrar el valor de las direcciones de "ent", "car" y "flt" utilizando "*" y "&"
 - Mostrar la dirección de "ent", "car" y "flt" imprimiendo los punteros "pEnt", "pCar" y "pFlt"
 - Mostrar el valor de las direcciones de los punteros "pEnt", "pCar" y "pFlt". utilizando "*"

Entrada:
La entrada a los valores que se deben asignar a las variables "ent", "car" y "flt"

Salida:
La salida debe seguir el siguiente formato:

"ent - valor: [Valor de ent]
car - valor: [Valor de car]
flt - valor: [Valor de flt]

&
ent - direccion: [Direccion de ent]
car - direccion: [Direccion de car]
flt - direccion: [Direccion de flt]

& y *
&ent - valor: [Valor de *(&ent)]
&car - valor: [Valor de *(&car)]
&flt - valor: [Valor de *(&flt)]

puntero
pEnt - direccion de ent: [Valor de pEnt]
pCar - direccion de car: [Valor de pCar]
pFlt - direccion de flt: [Valor de pFlt]

valores
pEnt - valor de ent: [Valor de *pEnt]
pCar - valor de car: [Valor de *pCar]
pFlt - valor de flt: [Valor de *pFlt]"

Recordar: Salto de linea final (ej: printf("output\n");)

Nota: Las direcciones de memorias obtenidas pueden diferir con las de este documento.

Entrada a:
2 a 0.35

Salida a:
ent - valor: 2
car - valor: a
flt - valor: 0.350000

&
ent - direccion: 0x7ffedb1cb078
car - direccion: 0x7ffedb1cb06f
flt - direccion: 0x7ffedb1cb05c

& y *
&ent - valor: 2
&car - valor: a
&flt - valor: 0.350000

puntero
pEnt - direccion de ent: 0x7ffedb1cb078
pCar - direccion de car: 0x7ffedb1cb06f
pFlt - direccion de flt: 0x7ffedb1cb05c

valores
pEnt - valor de ent: 2
pCar - valor de car: a
pFlt - valor de flt: 0.350000


Entrada b:
34 ! 1.1

Salida b:
ent - valor: 34
car - valor: !
flt - valor: 1.100000

&
ent - direccion: 0x7fff14c3fea8
car - direccion: 0x7fff14c3fe9f
flt - direccion: 0x7fff14c3fe8c

& y *
&ent - valor: 34
&car - valor: !
&flt - valor: 1.100000

puntero
pEnt - direccion de ent: 0x7fff14c3fea8
pCar - direccion de car: 0x7fff14c3fe9f
pFlt - direccion de flt: 0x7fff14c3fe8c

valores
pEnt - valor de ent: 34
pCar - valor de car: !
pFlt - valor de flt: 1.100000
**/
#include <stdio.h>

int main(void) {
  int ent, *pEnt; // var enteras, y puntero
  char car, *pCar; // var normal y puntero respectivo
  float flt, *pFlt;

  scanf("%d %c %f", &ent, &car, &flt); // leer tres tipos de variables
  pEnt = &ent; // almacenando direcciones de memoria
  pCar = &car;
  pFlt = &flt;

  printf("ent - valor: %d\n", ent); // imprime los valores
  printf("car - valor: %c\n", car);
  printf("flt - valor: %f\n\n", flt);

  printf("&\n");
  printf("ent - direccion: %p\n", &ent); // imprime direcciones de memoria
  printf("car - direccion: %p\n", &car); // son todas direcciones de memoria
  printf("flt - direccion: %p\n\n", &flt); // se usa %p en todo los casos
  
  printf("& y *\n");
  // *(&ent)
  // &ent -> es una direccion de memoria.
  // en este caso la direccion de memoria de ent
  // a la direccion de memoria de ent,
  // *( ... )   queremos obtener su contenido.
  //  en este caso es el valor contenido por la variable ent

  printf("&ent - valor: %d\n", *(&ent)); //contenido de la direccion de variable ent
  printf("&car - valor: %c\n", *(&car));
  printf("&flt - valor: %f\n\n", *(&flt));

  printf("puntero\n");
  printf("pEnt - direccion de ent: %p\n", pEnt); // direccion de ent
  printf("pCar - direccion de car: %p\n", pCar);
  printf("pFlt - direccion de flt: %p\n\n", pFlt);

  printf("valores\n");
  printf("pEnt - valor de ent: %d\n", *pEnt); // contenido de variable ent.
  printf("pCar - valor de car: %c\n", *pCar);
  printf("pFlt - valor de flt: %f\n", *pFlt);

  return 0;
}