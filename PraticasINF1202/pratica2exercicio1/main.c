#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //para usar calculos de raiz quadrada por exemplo

/*Escreva um programa que leia do teclado o raio de um círculo, e após calcule (e
informe na tela) o perímetro e a área do maior quadrado circunscrito nesse círculo*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float raio, perimetro, area;

    printf("Digite o raio da circunferência:\n");
    scanf("%f", &raio);

    //calculo do perimetro do quadrado circunscrito

    perimetro = raio*8; //o raio é metade do lado do quadrado
    area = pow(raio*2, 2);

    printf("O perimetro do quadrado circunscrito é: %f e a área é: %f", perimetro, area);

    return 0;
}
