/*
Programa escolhe entre calcular uma area ou um perimetro de uma circunferencia
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14

int main()
{
    int opcao;
    float raio, area, perimetro;

    printf("Informe o raio do circulo: \n");
    scanf("%f", &raio);
    printf("O que voce gostaria de calcular? \n1 para Area \n2 para Perimetro\n");
    scanf("%d", &opcao);

    perimetro = 2*PI*raio;
    area = PI * raio * raio;

    if (opcao != 1 && opcao != 2){
        printf("Entrada invalida");
    }else if(opcao == 1){
        printf("A area do circulo é: %f", area);
    }else if(opcao == 2){
        printf("O perimetro do circulo é: %f", perimetro);
    }
    return 0;
}
