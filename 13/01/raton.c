// raton.c
/**
Ratón en un laberinto

Se tiene un laberinto como una matriz cuadrada de dimensiones n x n, donde se sitúa un ratón en la esquina superior izquierda, es decir, la coordenada (0, 0) de la matriz. El objetivo del ratón es llegar a la ezquina inferior derecha de la matriz, es decir, la coordenada (n - 1, n - 1) de la matriz, por lo tanto el ratón solo realiza dos movimientos dentro del laberinto: avanzar hacia abajo o avanzar hacia la derecha.

La configuración del laberinto se representa a través de los valores de la matriz. Si una celda contiene un 0 significa que es un obstáculo, o bien muralla del laberinto. Si una celda contiene un 1 significa que puede ser utilizada como camino para el ratón.

Entrada:
La entrada corresponde al entero positivo n [1, 20], que indica el número de filas y columnas de la matriz cuadrada, seguido de n*n enteros 0 o 1 que representan la configuración del laberinto.
la coordenada (0, 0) siempre es 1.

Salida:
La salida debe ser el camino encontrado por el ratón para llegar a su objetivo. Para esto, imprima una matriz cero con el camino dibujado con 1's.
En el caso que no se encuentre un camino posible, indiquelo con NO HAY CAMINO.

Recordar: Salto de linea final (ej: printf("output\n");)

Nota: Dependiendo de su solución, las salidas con caminos pueden no coincidir con las de este documento, pero aún así sean válidas.

Entrada a:
3
1 1 1
1 0 1
0 0 1

Salida a:
1 1 1 
0 0 1 
0 0 1 


Entrada b:
2
1 0
0 0

Salida b:
NO HAY CAMINO
**/

#include<stdio.h>
#define DIM 100

int raton(int a[DIM][DIM], int n, int x,int y,int sol[DIM][DIM]){
	
	if(a[x][y]==0)//chocamos con una muralla
		return 0;

	if(x>=n || y>=n)//fuera del laberinto
		return 0;

	if(x==n-1 && y==n-1){ // llegamos a la meta
		sol[x][y]=1;
		return 1;
	}

	if (raton(a,n,x+1,y,sol)==1){//avanzar hacia abajo
		sol[x][y]=1; //recordar solucion
		return 1;
	}
	if (raton(a,n,x,y+1,sol)==1){//avanzar a la derecha
		sol[x][y]=1;
		return 1;
	}

	return 0;
}

int main(){
	int n,i,j;
	int a[DIM][DIM],sol[DIM][DIM];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			sol[i][j]=0; // inicializar matriz de soluciones
		}
	//printf("backtrack!\n");
	if(raton(a,n,0,0,sol)==1){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				printf("%d ",sol[i][j]);
			printf("\n"); 
		}
		printf("\n");
	}
	else{
		printf("NO HAY CAMINO\n");
	}
	return 1;
}