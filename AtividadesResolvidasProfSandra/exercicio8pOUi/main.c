#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Elabore um programa em linguagem C para ler um n�mero e verificar se ele �
par ou �mpar. Quando for par armazenar esse valor em P e quando for �mpar
armazen�-lo em I. Exibir P e I no final do processamento.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, p, i;
    p=i=0;

    printf("Digite um n�mero:\n");
    scanf("%d", &numero);

    if (numero%2 == 0){
        p = numero;
    }else {
        i = numero;
    }

    printf("P = %d\nI = %d", p, i);

    return 0;
}
