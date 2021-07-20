#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Modifique o programa para ler 3 números e fornecer a soma e o produto, cada um em uma linha, com mensagens explicando as saídas.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float val1, val2, val3; //Declaração da variáveis de entrada
    float soma, produto; //Declaração da variável com o resultado

    printf("Valor do primeiro termo:\n");
    scanf("%f", &val1);
    printf("Valor do segundo termo:\n");
    scanf("%f", &val2);
    printf("Valor do terceiro termo:\n");
    scanf("%f", &val3);

    soma = val1 + val2 + val3;
    produto = val1*val2*val3;

    printf("Resultado da soma: %f\nResultado do produto: %f", soma, produto);

    return 0;
}
