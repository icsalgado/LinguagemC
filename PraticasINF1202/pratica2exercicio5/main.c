#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que calcule o conceito de um aluno da turma de INF01202.
Para isso, o programa deve ler do teclado as notas de um aluno e calcular a média ponderada
da disciplina. Após esse cálculo, o programa deve informar na tela a média final e o respectivo
conceito. O cálculo da média ponderada, bem como a correlação do conceito foram apresentados
na primeira aula.
A - 9 a 10
B - 8 a 8.9
C - 7 a 7.9
D - 6 a 6.9
E - 0 a 5.9

trabalho 1 de peso 2
trabalho 2 de peso 3
prova 1 de peso 4
prova 2 de peso 5
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float trabalho1, trabalho2, prova1, prova2, mediaFinal;

    printf("Insira a nota do trabalho 1:\n");
    scanf("%f", &trabalho1);
    printf("Insira a nota do trabalho 2:\n");
    scanf("%f", &trabalho2);
    printf("Insira a nota do prova 1:\n");
    scanf("%f", &prova1);
    printf("Insira a nota do prova 2:\n");
    scanf("%f", &prova2);

    mediaFinal = (trabalho1*2+trabalho2*3+prova1*4+prova2*5)/(2+3+4+5);

    if (mediaFinal <= 5.9){
        printf("Conceito E\n\n");
    }else{
        if (mediaFinal > 5.9 && mediaFinal < 7){
            printf("Conceito D\n\n");
        }else{
            if (mediaFinal > 6.9 && mediaFinal < 8){
                printf("Conceito C\n\n");
            }else{
                if (mediaFinal > 7.9 && mediaFinal < 9){
                    printf("Conceito B\n\n");
                }else{
                    printf("Conceito A\n\n");
                }
            }
        }
    }

    return 0;
}
