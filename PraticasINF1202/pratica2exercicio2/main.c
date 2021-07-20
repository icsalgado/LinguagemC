#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Uma loja está em liquidação, e tem um sistema de etiquetas com códigos (letras)
para indicar o percentual de desconto de cada produto. Produtos contendo etiquetas com a letra
A tem 10% de desconto, com letra B tem 20%, letra C tem 30% e letra D tem 50%. Escreva um
programa que leia do teclado o valor de um produto, o código (letra) de desconto, e imprima na
tela o valor do desconto e também o valor final do produto.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valorProduto, desconto, valorFinal;
    char etiqueta;

    printf("digite o valor do produto:\n");
    scanf("%f", &valorProduto);
    printf("digite a etiqueta de desconto do produto:\n");
    scanf("%s", &etiqueta);

    switch (etiqueta){

        case 'a':
            valorFinal = valorProduto*0.9;
            desconto = valorProduto-valorFinal;
            printf("A -O produto custa R$ %.2f\nO desconto foi de R$ %.2f\nO valor final é de R$ %.2f", valorProduto, desconto, valorFinal);
            break;
        case 'b':
            valorFinal = valorProduto*0.8;
            desconto = valorProduto-valorFinal;
            printf("B -O produto custa R$ %.2f\nO desconto foi de R$ %.2f\nO valor final é de R$ %.2f", valorProduto, desconto, valorFinal);
            break;
        case 'c':
            valorFinal = valorProduto*0.7;
            desconto = valorProduto-valorFinal;
            printf("C -O produto custa R$ %.2f\nO desconto foi de R$ %.2f\nO valor final é de R$ %.2f", valorProduto, desconto, valorFinal);
            break;
        case 'd':
            valorFinal = valorProduto*0.5;
            desconto = valorProduto-valorFinal;
            printf("D -O produto custa R$ %.2f\nO desconto foi de R$ %.2f\nO valor final é de R$ %.2f", valorProduto, desconto, valorFinal);
            break;
        default:
            break;

    }

    return 0;
}
