#include <stdio.h>
#include <math.h>

int main()
{
  float cateto1, cateto2, hipotenusa, area, perimetro;

  scanf ("%f %f", &cateto1, &cateto2);

  hipotenusa=sqrt(cateto1*cateto1 + cateto2*cateto2);
  area=(cateto1*cateto2)/2.0;
  perimetro=cateto1+cateto2+hipotenusa;

  printf ("%f %f %f\n", hipotenusa, area, perimetro);
}
