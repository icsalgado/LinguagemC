#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Uma companhia de pulverização utiliza aviões para pulverizar lavouras. Os custos
de pulverização dependem do tipo de praga e da área contratada conforme segue:
 Tipo A: Pulverização contra ervas daninhas, R$ 500,00 por acre;
 Tipo B: Pulverização contra gafanhotos, R$ 1.000,00 por acre;
 Tipo C: Pulverização contra broca, R$ 1.500,00 por acre.
Se a área a ser pulverizada é maior do que 1000 acres, o fazendeiro recebe um desconto de 5%.
Além disso, qualquer fazendeiro cujo custo ultrapasse R$ 750.000,00 recebe um desconto de 10%
sobre o valor que ultrapassar R$ 750.000,00. Se ambos os descontos se aplicam, aquele relacionado
à área é calculado em primeiro lugar. Escreva um programa para obter as informações de área
e tipo de praga, relativas a um serviço realizado, e calcular e apresentar o valor total a ser pago
pelo fazendeiro que o contratou.*/

int main()
{
    setlocale(LC_ALL, "");

    float area, valorParcial, valorExcedente, valorComDesconto, valorFinal;
    int praga; //1 ervas daninhas 2 gafanhotos 3 broca

    printf("Quantos acres tem a regiao a ser pulverizada?\n");
    scanf("%f", &area);
    printf("Informe o tipo de praga:\n1 para ervas daninhas\n2 para gafanhotos\n3 para brocas\n");
    scanf("%d", &praga);


    switch (praga){
        case 1: //ervas daninhas R$ 500,00
            valorParcial = 500*area;
            if (area <= 1000){
                printf("O valor do serviço é de R$ %.2f", valorParcial);
            }else {
                valorComDesconto = valorParcial-valorParcial*0.05;
                if (valorComDesconto > 750000){
                    valorExcedente = valorComDesconto - 750000;
                    valorExcedente = valorExcedente-valorExcedente*0.10;
                    valorFinal = 750000 + valorExcedente;
                    printf("O valor do serviço é de R$ %.2f", valorFinal);
                }else{
                   printf("O valor de serviço é de R$ %.2f", valorComDesconto);
                }
            }
            break;

        case 2: //gafanhotos R$ 1000,00
            valorParcial = 1000*area;
            if (area <= 1000){
                printf("O valor do serviço é de R$ %.2f", valorParcial);
            }else {
                valorComDesconto = valorParcial-valorParcial*0.05;
                if (valorComDesconto > 750000){
                    valorExcedente = valorComDesconto - 750000;
                    valorExcedente = valorExcedente-valorExcedente*0.10;
                    valorFinal = 750000 + valorExcedente;
                    printf("O valor do serviço é de R$ %.2f", valorFinal);
                }else{
                   printf("O valor de serviço é de R$ %.2f", valorComDesconto);
                }
            }
            break;

        case 3: //brocas R$ 1500,00
            valorParcial = 1500*area;
            if (area <= 1000){
                printf("O valor do serviço é de R$ %.2f", valorParcial);
            }else {
                valorComDesconto = valorParcial-valorParcial*0.05;
                if (valorComDesconto > 750000){
                    valorExcedente = valorComDesconto - 750000;
                    valorExcedente = valorExcedente-valorExcedente*0.10;
                    valorFinal = 750000 + valorExcedente;
                    printf("O valor do serviço é de R$ %.2f", valorFinal);
                }else{
                   printf("O valor de serviço é de R$ %.2f", valorComDesconto);
                }
            }
            break;

        default:
            break;
    }


    return 0;
}
