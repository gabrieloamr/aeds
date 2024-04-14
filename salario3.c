#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioBase, salarioAReceber, imposto, bonus;

    printf("Digite o salario base:\n");
    scanf("%f", &salarioBase);

    bonus = salarioBase * 0.05;

    imposto = (salarioBase + bonus) * 0.07;

    salarioAReceber = (salarioBase + bonus) - imposto;

    printf("Salario a receber: %f\n", salarioAReceber);


    return 0;
}