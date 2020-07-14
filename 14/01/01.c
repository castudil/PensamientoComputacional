/*
Escriba un programa que enseñe la declaración de las variables puntero, los espacios de memorias de variables y los operadores "&" y "*".

Para esto utilize dos variables:
 - Variable entero m
 - Varieble puntero a entero z (*z)

Luego, la variable z debe apuntar a la dirección de memoria de m.

El programa debe imprimir:
1. El valor de m
2. La dirección de memoria de m
3. El valor de z
4. La dirección de memoria de z

Entrada:
La entrada corresponde al valor entero a almacenar en la variable m.

Salida:
La salida debe seguir el siguiente formato:

"El valor de m es = [Valor de m]

La direccion de memoria &m es = [Valor de &m]

z almacena la direccion de m = [Valor de z]

*z es el valor de m = [Valor de *z]

La direccion de memoria &z es = [Valor de &z]"

Recordar: Salto de línea final (ej: printf("output\n");)

Nota: Las direcciones de memorias obtenidas pueden diferir con las de este documento.

Entrada a:
5

Salida a:
El valor de m es = 5

La direccion de memoria &m es = 0x7ffc741eca48

z almacena la direccion de m = 0x7ffc741eca48

*z es el valor de m = 5

La direccion de memoria &z es = 0x7ffc741eca40


Entrada b:
-10

Salida b:
El valor de m es = -10

La direccion de memoria &m es = 0x7ffd27e3c298

z almacena la direccion de m = 0x7ffd27e3c298

*z es el valor de m = -10

La direccion de memoria &z es = 0x7ffd27e3c290
*/

#include <stdio.h>

int main(void) {
  int m;
  int *z; 
  scanf("%d",&m);
  z=&m;
  printf("El valor de m es: %d\n\n",m);
  printf("La direccion de memoria de m es = %p\n\n",&m);
  printf("z almacena la direccion de m = %p\n\n",z);
  printf("El valor de z es: %d\n\n",*z);
  printf("La direccion de memoria de z es = %p\n\n",&z);
  return 0;
} 