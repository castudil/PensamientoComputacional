/*

Estructura de datos LISTA

*/


#include <stdio.h>
#include <stdlib.h>

 
//estructura para almacenar los datos
struct nodo{ 
    int dato; // almacenamos numeros
    struct nodo *otro;  // puntero a otro elemento struct nodo
};  // punto y coma al final es importante OJO
 

//declaracion de las funciones 
struct nodo* insertar(struct nodo *p, int x);
void imprimir(struct nodo *p);
void eliminar(struct nodo *p);
 
int main(){
    int x;
    struct nodo *p; // puntero a struct nodo * (a una cajita)
    p = NULL; // aseguramos que apunte a NULL

    scanf("%d",&x); // leer un valor
     
    while(x!=-1){ // -1 significa fin de lista. 
        p=insertar(p,x);//insertar en la lista
        scanf("%d",&x); // leemos otro valor
    } 

    imprimir(p); //acceder a los datos
    printf("\n");
    eliminar(p); // liberar la memoria, borrando las celdas que reservamos.
    return 0;
}
 
 
 /**
 insertar es una funcion que agrega elementos a una lista enlazada

lista LIFO : Last in first out
el ultimo elemento que ingresamos al sistema sera el primer elemento en ser extraido del sistema

BANCO:
 6  3  1   C
 la primera persona en ser antedida
 el de 1 cheque es el primero en ser atendido.
6 3 C
ese en un ejemplo FIFO
First in, first out
o el primero en llegar es el primero en ser atendido.


Nuestro ejempo LIFO se parece mas a una ruma de platos.

C, J, N

Primer comenzal en termianr C

su plato que abajo en el lavaplatos por los otros platos quedaron encima.Cual es el primer plato en lavarse ... el de NAtalia!
Eso es lo que implementamos



 entrada:
 struct nodo *p: puntero a la lista. originalmente es NULL
 int x: entero cuyo valor se quiere almacenar en la lista

salida:
puntero a la lista.
 **/
struct nodo * insertar(struct nodo *p, int x){
    struct nodo *q; // creamos un nuevo puntero 
    q = malloc(sizeof(struct nodo)); // reservamos memoria y creamos caja, y sus campos tienen basura.
    q->dato = x;  // en dato guardo x
    q->otro = p;  // en el campo otro apunta a p, que un puntero a un elemento de la lista anterior. al principio es NULL.
    p = q; // p apunta al elemento nuevo que estamos creando.
    return p; // retornamos la nueva posicion de p.
}
 
/*
imprime el contenido de la lista
entrada: punterto p que apunta al ultimo elemento ingresado en la lista.
*/
void imprimir(struct nodo *p){
    while(p != NULL){ // mientras que no sea NULL
        printf("%7d",p->dato);  // imprime el contenido de p
        p = p->otro; //  saltamos a la siguiente caja. (equivalente al i++ de un for)
    }
}
 
void eliminar(struct nodo *p){ 
    struct nodo *actual; 
    while(p != NULL){ 
        actual = p; 
        p = p->otro; 
        free(actual);
    }
}