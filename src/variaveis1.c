#include <stdio.h>
int main(){
    int n1 = 10;
    int n2 = 20;
    int rs = n1 + n2;
    // imprimir o valor da variavel e o 
    // endereço de memória de cada um
    printf("o valor de n1 é %d\n",n1); 
    // para exibir o endereço de memória que iremos usar
    // comando &
    printf("O endereço de n1 é %p\n",&n1);

    printf("o valor de n2 %d\n",n2);
    printf("O endereço de n2 é %p\n",&n2);

    printf("o valor de rs é %d\n",rs);
    printf("o endereço de rs é %p\n",&rs);

    return 0;


}