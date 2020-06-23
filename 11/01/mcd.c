#include <stdio.h>

int MCD(int n1, int n2) {
  if (n2 != 0){
    //factorialprintf("MCD(%3d,%3d)\n", n2, n1 % n2);
    return MCD(n2, n1 % n2);
  }
  else
    return n1;
}

int main(void) {
  int n1, n2;

  scanf("%d %d", &n1, &n2);

  printf("%d\n", MCD(n1, n2));
}