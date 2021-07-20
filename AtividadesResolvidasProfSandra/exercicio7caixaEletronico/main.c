#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um programa em linguagem C que simule um caixa eletrônico quando
vamos sacar dinheiro. O caixa eletrônico verifica se o valor que desejamos sacar
é menor que o saldo disponível. Assumiremos que há R$ 2.000,00 de saldo
disponível para o saque. Se valor do saque for menor que o saldo disponível,
subtrair do saldo disponível o valor do saque e apresente o valor do saque. Caso
contrário, informar que o valor solicitado é maior que o valor disponível para
saque. Independente se tem ou não saldo suficiente para saque o algoritmo ao
final deve mostrar o saldo disponível.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float saldo = 2000.00;
    float saque;

    printf("Qual o valor do saque? \n");
    scanf("%f", &saque);

    if (saque > saldo){
        printf("Saldo insuficiente\n");
        printf("Saldo atual: R$ %.2f\n", saldo);
    }else {
        printf("Saque de R$ %.2f\n", saque);
        saldo = saldo-saque;
        printf("Saldo atual: R$ %.2f\n", saldo);
    }

    return 0;
}
