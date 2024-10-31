#include <stdio.h>

int main() {
    int num;
    int bissextos =0;
   for (num=1930; num <=2024; num++){
        if(num % 4 == 0 ){
            printf("%d\n" ,num);
            bissextos++; 
        }

    }
    printf("A quantidade de anos bissextos é de %d \n" ,bissextos);
    return 0; 
}
    