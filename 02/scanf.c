#include <stdio.h>

int main()  // main, importante
{
    int a; // declarar una variable
    int b, c; // se crean dos variables separandolas por coma
    printf("Enter the first value:"); // imprimos un texto
    scanf("%d", &a); // preguntamos desde la entrada estandar (puede ser el teclado) . %d significa que vamos a leer un valor entero
    printf("Enter the second value:");
    scanf("%d", &b);
    c = a + b; // suma simple que almacena en la variable c
    printf("%d + %d = %d\n", a, b, c); // formateo, imprime tres valores enteros
    return 0;
}