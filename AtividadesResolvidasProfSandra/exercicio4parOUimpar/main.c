#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore o programa em C que efetua a leitura de um valor numérico, verifique
se este valor é par ou ímpar e apresente o resultado dessa verificação na tela.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);

    if (numero%2 == 0){
        printf("O número é par");
    }else{
        printf("O número é impar");
    }

    return 0;
}
