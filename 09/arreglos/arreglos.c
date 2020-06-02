#include<stdio.h>


//  arreglo con puros ceros
void ceros(int a[10]){
  int i;
  for(i=0;i<10;i++){
    a[i]=0;
  }
}

// arreglos con puros unos
void unos(int a[10]){
  int i;
  for(i=0;i<10;i++){
    a[i]=1;
  }
}

void print(int a[10]){
  int i;
  for(i=0;i<10;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}


int main(){
  int x[10];
  ceros(x);
  print(x);
  unos(x); // pasaje por REFERENCIA
  print(x);
  return 0;
}