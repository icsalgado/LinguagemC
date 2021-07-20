#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Elaborar um programa em C para ler uma variável numérica N e imprimi-la
somente se a mesma for maior que 50, caso contrário imprimi-la com o valor
zero.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n;

    printf("Atribua um valor para N:\n");
    scanf("%f", &n);

    if (n > 50){
        printf("N = %f", n);
    }else {
        n = 0;
        printf("N = %f", n);
    }

    return 0;
}
