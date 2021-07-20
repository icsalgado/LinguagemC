/*
Programa calcula a comissão de uma venda
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float venda;
    int comissao;
    float valorComissao;

    printf("Qual o valor total da venda?\n");
    scanf("%f", &venda);
    printf("Qual a porcentagem da comissão?\n");
    scanf("%d", &comissao);

    valorComissao = (venda*comissao)/100;

    printf("O valor da comissão é de: %f", valorComissao);

    return 0;
}
