/*
Escriba un programa que muestre los n términos de la serie [ (x) + (-(x^3)) + ( x^5 ) + ... ] y finalmente la suma de todos los terminos.
La entrada corresponde al valor n y el valor x, en tal orden, donde ambos son enteros.
El formato de la salida es un término de la serie por linea y una última linea para la suma.

Fórmula de cada término de la serie: ((-1)^(i+1))*(x^(2i-1))

Recordar: Salto de linea final (ej: printf("output\n");)

Entrada a:
2 2

Salida a:
2
-8
-6

Entrada b:
3 5

Salida b:
5
-125
3125
3005

*/

/*
diseño

entrada:
entero n, el numero de terminos de la serie
entero x, valor de x en la serie dada.

salida,
n terminos de la serie, uno por linea.
suma de los terminos de la serie

metodo.
iterar n veces, indentificando los terminos de la serie dada.

*/


#include<stdio.h>
#include<math.h>

int main(){
  int n,x;
  int i;//contador
  float valor,suma=0.0;
  scanf("%d %d",&n,&x);

  for(i=1;i<=n;i++){
    //printf("%d\n",((-1)^(i+1))*(x^(2*i-1)));
    //printf("%.0f\n",pow(-1,i+1)*pow(x,2*i-1));
    valor=pow(-1,i+1)*pow(x,2*i-1);
    printf("%.0f\n",valor);
    //-1^(1+1)*(2^(2*1-1))
    suma=suma+valor;
  }
  printf("%.0f\n",suma);
return 0;
}
