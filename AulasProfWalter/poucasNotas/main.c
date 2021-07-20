/*
Programa calcula menor numero de notas de reais possiveis para um dado valor
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota200, nota100, nota50, nota20, nota10, nota5, nota2, moeda1;
    int valor, parcial;

    printf("Insira um valor em Reais sem os centavos:\n");
    scanf("%d", &valor);

    nota200 = valor/200;
    parcial = valor%200;
    nota100 = parcial/100;
    parcial = parcial%100;
    nota50 = parcial/50;
    parcial = parcial%50;
    nota20 = parcial/20;
    parcial = parcial%20;
    nota10 = parcial/10;
    parcial = parcial%10;
    nota5 = parcial/5;
    parcial = parcial%5;
    nota2 = parcial/2;
    parcial = parcial%2;
    moeda1 = parcial;

    printf("Notas de 200: %d\nNotas de 100: %d\nNotas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 2: %d\nMoedas de 1: %d\n", nota200, nota100, nota50, nota20, nota10, nota5, nota2, moeda1);


    return 0;
}
