#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Este programa pega dois inteiros, os soma e exibe o resultado na tela
Entradas: dois valores inteiros (lidos via teclado)
Sa�da: a soma dos dois valores lidos
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int val1, val2; //Declara��o da vari�veis de entrada
    int soma; //Declara��o da vari�vel com o resultado

    printf("Valor do primeiro termo da soma:\n");
    scanf("%d", &val1);
    printf("Valor do segundo termo da soma:\n");
    scanf("%d", &val2);

    soma = val1 + val2;

    printf("Resultado da soma: %d", soma);

    return 0;
}
