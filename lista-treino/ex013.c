#include<stdio.h>

int main(){

        int ganho , horas , inss , bruto , sindicato , descontos , liquido;

        printf("Quanta voce ganha por hora?\n");
        scanf("%i",&ganho);
        printf("Quantas horas voce trabalha?\n");
        scanf("%i",&horas);

        bruto = ganho * horas;
        inss = (bruto * 0.08);
        sindicato = bruto * 0.05;
        descontos = bruto * 0.24; // imposto(11%) + sindicato(5%) + inss(8%)
        liquido = bruto - descontos;

        printf("A = %i\n" , bruto);
        printf("B= %i\n", inss);
        printf("C= %i\n",sindicato);
        printf("D= %i\n", liquido);

        return 0;






}