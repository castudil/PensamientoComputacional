#include <stdio.h>

int main(void)
{
  int i, n;
  float sum = 0.0;

  scanf("%d", &n);
  
  for(i=1;i<=n;i++)
  {
    printf("1/%d + ",i);
    sum=sum + 1/(float)i;
  }

  printf("\n%f\n", sum);
}