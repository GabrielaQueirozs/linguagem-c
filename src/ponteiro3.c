#include <stdio.h>

int main(){
    int valores [] = {32,5,26,8,64,18,72};
    int *p_valores = valores;
    // %p é o endereço de memória 
    printf("%p com valor %d\n" ,p_valores, *p_valores); 
    p_valores++;
    printf("%p com valor %d\n" ,p_valores, *p_valores);
    p_valores++;
    printf("%p com valor %d\n" ,p_valores, *p_valores);

    return 0;

}