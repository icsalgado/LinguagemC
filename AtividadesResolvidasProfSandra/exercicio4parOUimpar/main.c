#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore o programa em C que efetua a leitura de um valor num�rico, verifique
se este valor � par ou �mpar e apresente o resultado dessa verifica��o na tela.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um n�mero:\n");
    scanf("%d", &numero);

    if (numero%2 == 0){
        printf("O n�mero � par");
    }else{
        printf("O n�mero � impar");
    }

    return 0;
}
