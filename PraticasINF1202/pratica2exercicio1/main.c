#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //para usar calculos de raiz quadrada por exemplo

/*Escreva um programa que leia do teclado o raio de um c�rculo, e ap�s calcule (e
informe na tela) o per�metro e a �rea do maior quadrado circunscrito nesse c�rculo*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float raio, perimetro, area;

    printf("Digite o raio da circunfer�ncia:\n");
    scanf("%f", &raio);

    //calculo do perimetro do quadrado circunscrito

    perimetro = raio*8; //o raio � metade do lado do quadrado
    area = pow(raio*2, 2);

    printf("O perimetro do quadrado circunscrito �: %f e a �rea �: %f", perimetro, area);

    return 0;
}
