#include<stdio.h>

int main(){

        int ganho , horas , total;

        printf("Quanta voce ganha por hora?\n");
        scanf("%i",&ganho);
        printf("Quantas horas voce trabalha?\n");
        scanf("%i",&horas);

        total = horas*ganho;

        printf("Salario total por mes = %i",total);

        return 0;



}