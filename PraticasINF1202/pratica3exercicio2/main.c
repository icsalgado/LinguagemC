#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Em uma loja de suprimentos de informática, as mercadorias são codificadas por um número
inteiro, conforme exemplificado na tabela abaixo.
Código Produto Valor (em R$)
13 mouse 50,00
82 teclado 85,00
102 cartucho impressora 25,00
120 webcam 120,00
153 DVD (pacote) 15,00
Escreva um programa que processe o resultado de uma venda apenas. O programa deve ler o
código do produto vendido e a o número de unidades desse produto, e calcular o valor total da
venda. Se esse valor for maior ou igual a R$ 300,00, o programa deve perguntar em quantas vezes
o usuário deseja parcelar a compra sem juros (até 5 vezes), ler sua resposta, e imprimir na tela
o valor de cada parcela. Obs. o programa deve indicar se um código inválido foi digitado. Use
obrigatoriamente o switch-case em sua implementação.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int produto, multiplicador, parcelas;
    float valorFinal, valorParcela;
    int controle;

    do{
        printf("Digite o código do produto:\n");
        scanf("%d", &produto);
        printf("Digite a quantidade do produto:\n");
        scanf("%d", &multiplicador);

        switch (produto) {
            case 13: //mouse
                controle = 1;

                valorFinal = 50*multiplicador;
                if (valorFinal >= 300){
                    printf("Parcelamento em quantas vezes?\n");
                    scanf("%d", &parcelas);
                    while(parcelas > 5 || parcelas < 1){
                        printf("Entrada de parcelamento inválidada! Maximo de 5 vezes sem juros\n\n");
                        printf("Parcelamento em quantas vezes?\n");
                        scanf("%d", &parcelas);
                    }
                    valorParcela = valorFinal/parcelas;
                    printf("O valor total da compra de Mouses é de R$ %.2f\nParcelado em %d vezes sem juros de R$ %.2f\n\n", valorFinal, parcelas, valorParcela);
                }else
                {
                    printf("O valor total da compra de Mouses é de R$ %.2f\n", valorFinal);
                }
                break;
            case 82: //teclado
                controle = 1;

                valorFinal = 82*multiplicador;
                if (valorFinal >= 300){
                    printf("Parcelamento em quantas vezes?\n");
                    scanf("%d", &parcelas);
                    while(parcelas > 5 || parcelas < 1){
                        printf("Entrada de parcelamento inválidada! Maximo de 5 vezes sem juros\n\n");
                        printf("Parcelamento em quantas vezes?\n");
                        scanf("%d", &parcelas);
                    }
                    valorParcela = valorFinal/parcelas;
                    printf("O valor total da compra de Teclados é de R$ %.2f\nParcelado em %d vezes sem juros de R$ %.2f\n\n", valorFinal, parcelas, valorParcela);
                }else
                {
                    printf("O valor total da compra de Teclados é de R$ %.2f\n", valorFinal);
                }
                break;
            case 102: //cartucho de imporessora
                controle = 1;

                valorFinal = 25*multiplicador;
                if (valorFinal >= 300){
                    printf("Parcelamento em quantas vezes?\n");
                    scanf("%d", &parcelas);
                    while(parcelas > 5 || parcelas < 1){
                        printf("Entrada de parcelamento inválidada! Maximo de 5 vezes sem juros\n\n");
                        printf("Parcelamento em quantas vezes?\n");
                        scanf("%d", &parcelas);
                    }
                    valorParcela = valorFinal/parcelas;
                    printf("O valor total da compra de cartuchos é de R$ %.2f\nParcelado em %d vezes sem juros de R$ %.2f\n\n", valorFinal, parcelas, valorParcela);
                }else
                {
                    printf("O valor total da compra de cartuchos é de R$ %.2f\n", valorFinal);
                }
                break;
            case 120: //webcam
                controle = 1;

                valorFinal = 120*multiplicador;
                if (valorFinal >= 300){
                    printf("Parcelamento em quantas vezes?\n");
                    scanf("%d", &parcelas);
                    while(parcelas > 5 || parcelas < 1){
                        printf("Entrada de parcelamento inválidada! Maximo de 5 vezes sem juros\n\n");
                        printf("Parcelamento em quantas vezes?\n");
                        scanf("%d", &parcelas);
                    }
                    valorParcela = valorFinal/parcelas;
                    printf("O valor total da compra de Webcam é de R$ %.2f\nParcelado em %d vezes sem juros de R$ %.2f\n\n", valorFinal, parcelas, valorParcela);
                }else
                {
                    printf("O valor total da compra de Webcam é de R$ %.2f\n", valorFinal);
                }
                break;
            case 153: //DVD
                controle = 1;

                valorFinal = 15*multiplicador;
                if (valorFinal >= 300){
                    printf("Parcelamento em quantas vezes?\n");
                    scanf("%d", &parcelas);
                    while(parcelas > 5 || parcelas < 1){
                        printf("Entrada de parcelamento inválidada! Maximo de 5 vezes sem juros\n\n");
                        printf("Parcelamento em quantas vezes?\n");
                        scanf("%d", &parcelas);
                    }
                    valorParcela = valorFinal/parcelas;
                    printf("O valor total da compra de DVDs é de R$ %.2f\nParcelado em %d vezes sem juros de R$ %.2f\n\n", valorFinal, parcelas, valorParcela);
                }else
                {
                    printf("O valor total da compra de DVDs é de R$ %.2f\n", valorFinal);
                }
                break;
            default:
                printf("Entrada de código inválidada!\n");
                controle = 0;
                break;
        }


    }while (controle != 1);

    return 0;
}
