#include <stdio.h>
int main (){
    float salario_bruto, vale, inss, fgts, desconto, salario;

    printf("Digite o salario bruto \n");
    scanf("%f" ,&salario_bruto);

    vale = salario_bruto * 0.06;
    inss = salario_bruto * 0.07;
    fgts = salario_bruto * 0.08;

    desconto = vale + inss + fgts;
    salario  = salario_bruto - desconto; 

    printf("Total com desconto é de R$ %.2f ", desconto);
    printf("Salario liquido é de R$ %.2f " ,salario);

    return 0;





}