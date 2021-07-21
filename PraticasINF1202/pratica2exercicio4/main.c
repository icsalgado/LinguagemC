#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Escreva um programa que leia do teclado o raio e a altura de um cilindro, e após
calcule (e informe na tela) o seu volume e a sua área total.*/

#define PI 3.14 //definindo o valor de pi em PI

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio, altura, volume, area;

    printf("Informe o raio do cilindro:\n");
    scanf("%f", &raio);
    printf("Informe a altura do cilindro:\n");
    scanf("%f", &altura);

    volume = PI * pow(raio, 2) * altura; //calculo do volume PI*raio^2*altura
    area = 2*(PI*pow(raio, 2))+2*(PI*raio*altura);//calculo da area 2(PI*raio^2)+2(PI*raio*altura)

    printf("O volume do cilindo é: %f\nA área total do cilindro é: %f", volume, area);

    return 0;
}
