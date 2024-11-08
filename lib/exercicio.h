
#include <stdio.h>
// dizer o miaor valor
int maiorvalor(int n[], int qtd){
    int m = n[0];
    int i;

    for (i = 1; i < qtd; i++){
        if (n[i]>m){
       m = n[i];
        } 
        
    }
    return m; 
}
//  dizer o genero

char sexo(char letra){
    if (letra == 'f' || letra == 'F' ) {
        printf("Feminino");
    }
    else if (letra == 'm'  || letra == 'M') {
        printf("masculino");
    }
    else {
        printf("inexistente");
    }
    

}

// dizer se é vogal ou consoante

void vogal(char letra){
    if (letra == 'a'){
        printf ("%c é vogal",letra);
    }
    else if (letra == 'e'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'i'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'o'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'u'){
        printf ("%c é vogal",letra);
    }
    else {
        printf("%c Nâo é vogal",letra);
    }

}
// salarios
void reajuste(float salario){
    float aumento;
    float novo_salario;
    if (salario <=280){
        aumento = salario * (20.0 / 100);
        novo_salario = 280 + aumento;
        printf   ("O salario antigo é %f e foi reajustado em 20%, o valor de aumento é %f" ,salario, novo_salario);

    }
    else if (salario <=1500){
        aumento = salario * (10 / 100);
        novo_salario = 280 + aumento;
        printf("O salario antigo é %f e foi reajustado em 15%, o valor de aumento é %f" ,salario, novo_salario);

    }
    else if (salario <=1500){
        aumento = salario * (10 / 100);
        novo_salario = 280 + aumento;
        printf("O salario antigo é %f e foi reajustado em 10%, o valor de aumento é %f" ,salario, novo_salario);


}
else if (salario  <=1500){
        aumento = salario * (5 / 100);
        novo_salario = 280 + aumento;
        printf("O salario antigo é %f e foi reajustado em 5%, o valor de aumento é %f" ,salario, novo_salario);
}
}


