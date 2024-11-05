#include <stdio.h>

int main (){
    
    char nome[20];
    printf("Digite o seu nome e tecle Enter\n");
    // foi necessário usar o colchetes para que o comando
    // scanf receba toda a cadeia de caraters.
    // o elemento ^(circunflexo) foi usado para indicar onde
    // começa o primero carcter. E comando \n, neste caso,
    // está sendo usado para ler o espaço aplicado.
    // ao final é ultilizdo o caracter s(string).
    scanf("%[^\n*]s" ,&nome);
    printf("Olá %s, Seja bem vindo\n" ,nome);




    return 0;
}