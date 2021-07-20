#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Os n�meros inteiros s�o os n�meros positivos e negativos. Estes n�meros
formam o conjunto dos n�meros inteiros, indicado por Z. O conjunto dos n�meros
inteiros � infinito e pode ser representado da seguinte maneira: Z = {..., - 3, - 2, -
1, 0, 1, 2, 3,...} Os n�meros inteiros negativos s�o sempre acompanhados pelo
sinal (-), enquanto os n�meros inteiros positivos podem vir ou n�o acompanhados
de sinal (+). O zero � um n�mero neutro, ou seja, n�o � um n�mero nem positivo
e nem negativo. Com base nisso, elabore um programa que leia um n�mero. Se
positivo armazene-o em A, se for negativo, em B. No final mostrar o resultado.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, valor;
    a=b=0;

    printf("Digite um numero:\n");
    scanf("%d", &valor);

    if (valor == 0){
        printf("O numero � zero\nA = %d\nB = %d \n", a, b);
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
