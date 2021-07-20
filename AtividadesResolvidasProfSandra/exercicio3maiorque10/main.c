#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elaborar um programa em linguagem C que leia dois valores numéricos reais
desconhecidos. Em seguida o programa deve efetuar a adição dos dois valores
lidos e apresentar o resultado caso seja maior que 10.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor1, valor2;
    float soma;

    printf("Insira um valor:\n");
    scanf("%f", &valor1);
    printf("Insira outro valor:\n");
    scanf("%f", &valor2);

    soma = valor1+valor2;

    if(soma > 10){
        printf("A soma dos valores é: %f", soma);
    }

    return 0;
}
