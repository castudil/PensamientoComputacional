#include<stdio.h>

int main(){
  int x;
  
  int *p; // cuando DECLARO una variable y antenpongo el operador * entonces explicitamente digo que la variable es de tipo puntero.

// que significa que una variable sea de tipo puntero?
// significa que la variable es capaz de almacenar direcciones de memoria.
//¿para que quisieramos almacenar direcciones de memoria?

//reserva dinamica de memoria!

// significa que ya no necesitamos reservar un epscaio fijo de memoria para guardar datos, sino que podemos aumentar o reducri en la medida que existas mas o menos datos.

x=11;

p= &x;// p "apunta" a x
// p almacena la direccion de memoria de x

printf("el valor de x es %d\n",x);

printf("la direccion de memoria de x es %p\n",&x);

printf("la direccion de memoria almacenada por p es %p\n",p);

printf("el valor apuntado por p es %d\n",*p);


// operador *
// durante la ejecucion del programa el operdaor * significa "el contenido de la direccion de memoria"

  return 0;
}