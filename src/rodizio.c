#include <stdio.h>

int main (){
    int placa;
    printf("Digite o número final da placa do seu veícuo e tecle enter\n");
    scanf("%d" ,&placa);

    if(placa ==1 || placa==2){
        printf("ESte veículo não pode circular na Segunda-feira");
    }
    else if(placa==3 || placa==4){
        printf("'ESte veículo não pode circular na Terça-feira");

    }
    else if (placa==5 || placa==6){
        printf("ESte veículo não pode circular Quarta-feira");

    }
    else if (placa==7 || placa==8) {
        printf("Este veículo não pode circular na Quinta-feira");
    }
    else if (placa==9 || placa==10){
        printf("Este veículo não pode circular na Sexta-feira");

    }
    else{
        printf("Número de placa inválido!");

    }
    printf("\n");
    return 0;
}