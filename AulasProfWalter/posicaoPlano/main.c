/*
Ler as coordenadas x e y e achar a posição do ponto no plano. Quadrante, eixos ou origem
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;

    printf("Informe as coordenadas na sequencia X e Y separando com espaço\n");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0){
        printf("O ponto está na origem");
    }else if(y == 0){
        printf("O ponto está no eixo X");
    }else if(x == 0){
        printf("O ponto está no eixo Y");
    }else if(x > 0 && y > 0){
        printf("O Ponto está no primeiro quadrante");
    }else if(x < 0 && y > 0){
        printf("O Ponto está no segundo quadrante");
    }else if(x < 0 && y < 0){
        printf("O ponto está no terceiro quadrante;");
    }else if(x > 0 && y < 0){
        printf("O ponto está no quarto quadrante");
    }
    return 0;
}
