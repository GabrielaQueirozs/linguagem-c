#include <stdio.h>

int main () {
    int valores[]= {13,8, 23, 95, 47, 14, 10, 45, 165};
    int soma =0;
    float divisão =0;
    for (int i =0; i <9; i++ ) {
            soma += valores[i];
            divisão = soma / 9;

            
      
    }
    printf("A soma dos valores é de %.2f\n" ,divisão);
    return 0;
    
}
