#include <stdio.h>
#include "../lib/exercicio.h"
 int main(){
    char letra;
    printf("qual seu sexo?\n");
    scanf("%c",&letra);
    printf("%c\n",sexo(letra));

    return 0;
 }