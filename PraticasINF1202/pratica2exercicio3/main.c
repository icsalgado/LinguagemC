#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um programa que inicialmente solicite a leitura do saldo em conta de
um correntista. A seguir, o programa deve processar tr�s opera��es consecutivas de cr�dito ou
d�bito. A cada uma dessas opera��es, o programa deve solicitar um valor a ser creditado na
conta (indicado por um valor positivo) ou debitado da conta (indicado por um valor negativo).
Ap�s cada uma dessas opera��es, o programa deve informar o saldo atualizado. Se ap�s alguma
atualiza��o o saldo for negativo, o programa deve informar essa situa��o para o correntista, e
cobrar uma multa de 5% sobre o saldo devedor (o valor da multa deve ser debitado da conta do
usu�rio, e o saldo deve ser atualizado).*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador, operacao;
    float saldo, valor, multa;

    printf("Digite o saldo da conta:\n");
    scanf("%f", &saldo);

    for (contador = 1; contador <= 3; contador++){
        //controlador de quantidade de opera��es
        printf("Digite 1 para cr�diro ou 2 para d�bito\n");
        scanf("%d", &operacao);

        if (operacao == 1){
            //opera��o de cr�dito
            printf("Digite o valor a ser creditado na conta:\n");
            scanf("%f", &valor);

            saldo = saldo + valor;
            if (saldo < 0){
                //aplica��o de multa quando o saldo fica negativo
                printf("Saldo negativo!\n");
                multa = -1*(saldo*0.05);
                saldo = saldo - multa; //atualiza o saldo depois da multa
                printf("Multa de R$ %.2f\n", multa);
                printf("Saldo: R$ %.2f\n", saldo);
            }else{
                printf("Saldo: R$ %.2f\n", saldo);
            }
        }
        if (operacao == 2){
            //opera��o de d�bito
            printf("Digite o valor a ser debitado da conta:\n");
            scanf("%f", &valor);

            saldo = saldo - valor;
            if (saldo < 0){
                printf("Saldo negativo!\n");
                multa = -1*(saldo*0.05);
                saldo = saldo - multa;
                printf("Multa de R$ %.2f\n", multa);
                printf("Saldo: R$ %.2f\n", saldo);
            }else{
                printf("Saldo: R$ %.2f\n", saldo);
            }
        }
    }

    return 0;
}
