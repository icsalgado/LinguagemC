/*
Programa converte o peço de um produto em reais para dolares
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float precoReal, valorDolar;
    float cotacaoDolarReal;

    printf("Qual a cotação atual do Dolar Americano?\n");
    scanf("%f", &cotacaoDolarReal);
    printf("Qual o valor do produto em Reais?\n");
    scanf("%f", &precoReal);

    valorDolar = precoReal/cotacaoDolarReal;

    printf("O valor do produto em US Dolares é: %f", valorDolar);

    return 0;
}
