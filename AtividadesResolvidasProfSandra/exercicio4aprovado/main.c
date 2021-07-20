#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elaborar um programa em linguagem C que leia três notas de um aluno. Em
seguida o programa deve efetuar o cálculo da média desse aluno e apresentar o
resultado APROVADO se a media maior ou igual a 7.0.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;

    printf("Digite a nota1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota2:\n");
    scanf("%f", &nota2);
    printf("Digite a nota3:\n");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    if (media >= 7){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }

    return 0;
}
