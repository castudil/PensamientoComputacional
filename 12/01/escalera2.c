/*
cuando hay 4 peldaños hay 7 formas de subir las escaleras de tal manera que sumen 4.
las siete formas son las siguientes.
1 1 1 1
1 1 2
1 2 1
1 3
2 1 1
2 2
3 1

*/



#include <stdio.h>

#define DIM 30


int escaleras(int numero_total_de_peldanos, int suma_actual, int lista[DIM],int k)
{
	int a,b,c;
	int i;

	if (suma_actual == numero_total_de_peldanos){
		for(i=0;i<k;i++)
			printf("%d ",lista[i]);
		printf("\t[OK]\n");
    	return 1;
    }
  
	if (suma_actual > numero_total_de_peldanos){
		for(i=0;i<k;i++)
			printf("%d ",lista[i]);
		printf("\t[ERROR]\n");
		return 0;
	}
	
	//aqui aun estamos subiendo la escalera
	lista[k]=1; // primer caso, avanzamos un peldaño
	a=escaleras(numero_total_de_peldanos,suma_actual + 1,lista,k+1);  
	
	lista[k]=2; // dos peldaños
	b=escaleras(numero_total_de_peldanos,suma_actual + 2,lista,k+1); 

	lista[k]=3;
	c=escaleras(numero_total_de_peldanos,suma_actual + 3,lista,k+1);

	return a+b+c;
}

int main()
{	
	int lista[DIM]; //lista con las combinaciones posibles
	int numero_total_de_peldanos;
	scanf("%d", &numero_total_de_peldanos);			
	printf("%d\n", escaleras(numero_total_de_peldanos,0,lista,0)); //en un principio lista esta vacia
}