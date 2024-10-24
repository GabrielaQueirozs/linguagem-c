#include <stdio.h>
int main () {
    // NOTAS DE ALUNOS E MÉDIA 
    float nota1,nota2,nota3,nota4, media;
    
    // Entradas de notas e de médias

    printf("Digite a nota1:");
    scanf("%f" ,&nota1);

    printf("Digite a nota2:");
    scanf("%f" ,&nota2);

    printf("Digite a nota3:");
    scanf("%f" ,&nota3);

    printf("Digite a nota4:");
    scanf("%f" ,&nota4);

    // Calculando as notas dos alunos 

    media = (nota1 + nota2 + nota3 + nota4 ) /4;
    


    printf("A média da notas é %.2f\n", media);
    return 0;



}