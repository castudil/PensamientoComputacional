/**
Escriba un programa que entregue la suma de los dígitos de un número entero utilizando una función recursiva.
La entrada corresponde al número del cual determinar la suma de sus dígitos.
La salida debe ser la suma de sus dígitos.

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
123

Salida a:
6


Entrada b:
15926

Salida b:
23

**/
/**
Diseño: 
entrada: ingresar el numero entero a operar
salida:resultado de la suma de los digitos del del numero de entrada 
metodo: dividir el numero en unidades 
        sacar MOD del numero para saber la ultima cifra del numero
        utilizar recursividad para seguir analizando el resto de cifras del numero


**/

#include <stdio.h>

int f(int numero){ 
    if(numero/10!=0){
        return numero%10 + f(numero/10); //Separación de digitos
    }else
        return numero;
}
        
    
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
   
}