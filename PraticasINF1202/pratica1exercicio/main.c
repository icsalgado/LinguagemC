#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Troque o tipo das vari�veis de int para float (e os s�mbolos de %d para %f, nos comandos scanf e printf) e
execute novamente o programa. Observe como foram apresentados os valores lidos. Execute algumas vezes fornecendo
valores com parte fracion�ria (lembre de n�o utilizar "." em lugar de "," para denotar o ponto decimal).
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float val1, val2; //Declara��o da vari�veis de entrada
    float soma; //Declara��o da vari�vel com o resultado

    printf("Valor do primeiro termo da soma:\n");
    scanf("%f", &val1);
    printf("Valor do segundo termo da soma:\n");
    scanf("%f", &val2);

    soma = val1 + val2;

    printf("Resultado da soma: %f", soma);

    return 0;
}
