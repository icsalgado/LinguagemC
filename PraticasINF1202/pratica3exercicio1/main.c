#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Em um concurso p�blico, a prova consiste de tr�s notas N1, N2 e N3, cada uma com valores
entre 0 e 10. Com base nas notas das provas, s�o calculadas as m�dias harm�nica e aritm�tica,
dadas por:
Nh = 3/(1/N1+1/N2+1/N3)
Na = (N1 + N2 + N3)/3
O candidato � automaticamente eliminado se tirar uma nota menor do que 2 em qualquer uma
das provas. Al�m disso, para que ele seja selecionado, as seguintes condi��es (todas) devem ser
satisfeitas:
- A m�dia aritm�tica Na deve ser maior ou igual 6
- A m�dia harm�nica Nh deve ser maior ou igual 4
- A soma de Na e Nh deve ser maior do que 12
Escreva um programa em C que leia as tr�s notas de um candidato, informando se ele foi selecionado
ou n�o. O programa deve validar a leitura das notas (para verificar poss�veis erros de
digita��o).*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    printf("Insira a nota1:\n");
    scanf("%f", &n1);
    //valida��o da nota
    while(n1 < 0 || n1 > 10){
        printf("\n\nEntrada inv�lida!!\n\n");
        printf("Insira a nota1:\n\n");
        scanf("%f", &n1);
    }

    printf("Insira a nota2:\n");
    scanf("%f", &n2);
    //valida��o da nota
    while(n2 < 0 || n2 > 10){
        printf("\n\nEntrada inv�lida!!\n\n");
        printf("Insira a nota2:\n\n");
        scanf("%f", &n2);
    }

    printf("Insira a nota3:\n");
    scanf("%f", &n3);
    //valida��o da nota
    while(n3 < 0 || n3 > 10){
        printf("\n\nEntrada inv�lida!!\n\n");
        printf("Insira a nota3:\n\n");
        scanf("%f", &n3);
    }

    //valida��o das condi��es para ser selecionado
    if (n1 < 2 || n2 < 2 || n3 < 2){
        printf("\n\nCandidato eliminado por uma ou mais notas abaixo de 2\n\n");
    }else
    {
        float nh, na;

        nh = 3/((1/n1)+(1/n2)+(1/n3));
        na = (n1+n2+n3)/3;

        if (na > 6 && nh > 4 && na+nh >12){
            printf("\n\nCandidato selecionado\n\n");
        }else
        {
            printf("\n\nCandidato n�o selecionado\n\n");
        }
    }

    return 0;
}
