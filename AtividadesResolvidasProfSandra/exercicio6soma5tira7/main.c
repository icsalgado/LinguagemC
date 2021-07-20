#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elaborar um programa em linguagem C que leia dois valores numéricos reais
desconhecidos. Em seguida o programa deve efetuar a adição dos dois valores
lidos e caso o resultado seja maior ou igual a 10, deve ser somado ao resultado
obtido o valor 5, obtendo-se novo resultado. Caso contrário, o valor do resultado
inicialmente obtido deve ser subtraído de 7, gerando-se outro resultado. Após a
obtenção de um dos novos resultados o novo resultado deve ser apresentado.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor1, valor2;

    printf("Digite o valor 1:\n");
    scanf("%f", &valor1);
    printf("Digite o valor 2:\n");
    scanf("%f", &valor2);

    if (valor1+valor2 >= 10)
    {
        printf("resultado: %f", valor1+valor2+5);
    }else {
        printf("resultado: %f", 7-(valor1+valor2));
    }

    return 0;
}
