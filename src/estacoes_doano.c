#include <stdio.h>
 int main () {
    int mes;
    printf("Digite o número do mês, clique no enter para saber a estação do mês\n");
    scanf("%d" , &mes);

    if (mes ==12 || mes ==1 || mes==2){
        printf("o mes de número %d é inverno" ,mes);
    }

     else if (mes ==3 || mes ==4|| mes==5){
        printf("o mes de número %d é primavera" ,mes);
 }
    else if 
        (mes ==6 || mes==7 || mes==8) {
            printf("o mes de número %d é verão", mes);
        }
    else if 
    (mes ==9 || mes==10 || mes==11){
        printf("o mes de número %d é outono",mes);
    }
    printf("\n");

    return 0;

    }
     
    
