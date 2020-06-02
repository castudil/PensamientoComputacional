#include<stdio.h>

int main(){
  int x,y,z;
  int resto;
  int monto;
  scanf("%d",&monto);
  x=monto/500;
  resto=monto%500;
  printf("%d ",x);
  y=resto/100;
  resto=resto%100;
  printf("%d ",y);
  z=resto/50;
  printf("%d\n",z);
}