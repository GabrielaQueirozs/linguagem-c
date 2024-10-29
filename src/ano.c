#include <stdio.h>

int main(){
    int ano ,resto;
    printf("Digite um ano para saber se é bissexto ou não\n");
    scanf("%d" ,&ano);

     resto = ano%4;   /* Devolve o resto da divisão de ano por 4*/

    if (resto==0) {

    printf("%d O ano é bissexto\n"); } 
     
    else {
        printf("%d não é um ano bissexto\n");
    }

    return 0;
}
