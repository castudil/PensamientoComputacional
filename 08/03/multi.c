#include <stdio.h>

int main(void)
{
  int arr1[10][10], arr2[10][10], result[10][10];
  int n, i, j, k, sum;

  scanf("%d", &n);
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      result[i][j] = 0;
      for(k=0; k<n; k++)
      {
        result[i][j] += arr1[i][k]*arr2[k][j];
      }
    }
  }

  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
}