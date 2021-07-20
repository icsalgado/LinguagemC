#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Elabore um programa que solicite para o usuário inserir dois valores inteiros e mostre na
tela ao executar a soma desses dois valores.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //declara as variaveis inteiras
    int valor1, valor2;
    int soma;

    //entrada de dados
    printf("Digite um valor: \n");
    scanf("%d", &valor1);
    printf("Digite outro valor: \n");
    scanf("%d", &valor2);

    //calculo
    soma = valor1 + valor2;

    //saida de dados
    printf("A soma dos valore é: %d", soma);

    return(0);
}
