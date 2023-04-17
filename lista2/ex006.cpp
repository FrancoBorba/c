#include<stdio.h>

int main(){

    int numero_cartao , saldoInicio , totalGasto, totalPago , limite;

    printf("Digite o numero do cartão");
    scanf("%i",&numero_cartao);
    printf("Qual o saldo inicial do cartão\n");
    scanf("%i",&saldoInicio);
    printf("Quanto foi gasto no mes \n");
    scanf("%i",&totalGasto);
    printf("Quanto foi pago no mes \n");
    scanf("%i",&totalPago);
    printf("Qual o limite do cartão\n");
    scanf("%i",&limite);

    if( totalGasto - saldoInicio > 0){
        printf("Não excedeu o limite");
    }
    else{
        if(totalPago - (totalGasto - saldoInicio) > limite){
        printf("Não excedeu o limite");
        }
        else{
            printf(" Excedeu o limite");
        }
    }

    return 0;

}