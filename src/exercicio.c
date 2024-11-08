#include <stdio.h>
#include "../lib/exercicio.h"

int main(){
    int num1,num2;
    int valores[2];
  printf("valor 1 \n");
  scanf("%d",&num1);
  printf("valor 2 \n");
  scanf("%d",&num2);
  valores[0] = num1;
  valores[1] = num2;
  int maior =maiorvalor(valores,2);
    printf("O maior numero é %d \n",maior);
    return 0;
  
}