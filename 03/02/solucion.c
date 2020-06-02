#include <stdio.h>
int main()
{
    int pesos_a_devolver, falta_por_devolver;
    int monedas_500, monedas_100, monedas_50;
    printf ("Pesos a devolver: ");
    scanf ("%d", &pesos_a_devolver);

    falta_por_devolver=pesos_a_devolver;
    monedas_500=falta_por_devolver/500;
    falta_por_devolver=falta_por_devolver-500*monedas_500;
    monedas_100=falta_por_devolver/100;
    falta_por_devolver=falta_por_devolver-100*monedas_100;
    monedas_50=falta_por_devolver/50;
    falta_por_devolver=falta_por_devolver-50*monedas_50;
    
    printf ("%d %d %d\n", monedas_500, monedas_100,monedas_50);
}
