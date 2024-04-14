#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioAntigo, salarioNovo;

    printf("Digite seu salario:\n");
    scanf("%f", &salarioAntigo);

    salarioNovo = salarioAntigo * 1.25;

    printf("Seu novo salario e': %f\n", salarioNovo);


    return 0;
}