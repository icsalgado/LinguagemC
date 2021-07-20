#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Os números inteiros são os números positivos e negativos. Estes números
formam o conjunto dos números inteiros, indicado por Z. O conjunto dos números
inteiros é infinito e pode ser representado da seguinte maneira: Z = {..., - 3, - 2, -
1, 0, 1, 2, 3,...} Os números inteiros negativos são sempre acompanhados pelo
sinal (-), enquanto os números inteiros positivos podem vir ou não acompanhados
de sinal (+). O zero é um número neutro, ou seja, não é um número nem positivo
e nem negativo. Com base nisso, elabore um programa que leia um número. Se
positivo armazene-o em A, se for negativo, em B. No final mostrar o resultado.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, valor;
    a=b=0;

    printf("Digite um numero:\n");
    scanf("%d", &valor);

    if (valor == 0){
        printf("O numero é zero\nA = %d\nB = %d \n", a, b);
    } else{
        if (valor%2 == 0){
            a = valor;
            printf("\nA = %d\nB = %d \n", a, b);
        }else {
            b = valor;
            printf("\nA = %d\nB = %d \n", a, b);
        }
    }

    return 0;
}
