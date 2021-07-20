#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um programa em linguagem C que simule um caixa eletr�nico quando
vamos sacar dinheiro. O caixa eletr�nico verifica se o valor que desejamos sacar
� menor que o saldo dispon�vel. Assumiremos que h� R$ 2.000,00 de saldo
dispon�vel para o saque. Se valor do saque for menor que o saldo dispon�vel,
subtrair do saldo dispon�vel o valor do saque e apresente o valor do saque. Caso
contr�rio, informar que o valor solicitado � maior que o valor dispon�vel para
saque. Independente se tem ou n�o saldo suficiente para saque o algoritmo ao
final deve mostrar o saldo dispon�vel.*/

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
