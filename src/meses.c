#include <stdio.h>

// estrutura de switch case 
int main () {
    int numero_mes;
    printf("Digite o número do mês e tecle Enter\n");
    scanf("%d" ,&numero_mes);
    switch (numero_mes) {

        case 1:
        printf("Janeiro mês do meu aniversário\n");
        break;

        case 2:
        printf("Fevereiro\n");
        break;

        case 3:
        printf("Março\n");
        break;

        case 4:
        printf("Abril\n");
        break;

        case 5:
        printf("Maio\n");
        break;

        case 6:
        printf("Junho\n");
        break;

        case 7:
        printf("Julho\n");
        break;

        case 8:
        printf("Agosto\n");
        break;

        case 9:
        printf("Setembro\n");
        break;

        case 10:
        printf("Outubro\n");
        break;

        case 11:
        printf("Novembro\n");
        break;

        case 12:
        printf("Dezembro\n");
        break;

        default: 
        printf("Este mês não existe\n");
        break;

        return 0;

    

    }
}






