#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elabore um algoritmo que leia o nome do usu�rio e a qualidade dessa pessoa, e exiba na
mensagem "< nome > � uma pessoa que tem <qualidade>".*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20], qualidade[20];

    printf("Digite seu nome:\n");
    gets(nome);
    printf("Digite sua qualidade:\n");
    gets(qualidade);

    printf("%s � uma pessoa que tem %s", nome, qualidade);

    return 0;
}
