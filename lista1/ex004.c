#include<stdio.h>

int main(){

    int idade , ano , mes, dia;

    printf("Digite sua idade em dias\n");
    scanf("%i", &idade);

    ano = idade/365;
    mes = (idade%365)/30;
    dia = (idade%365)%30;

    printf("%i ano(s)\n",ano);
    printf("%i mes(es)\n",mes);
    printf("%i dia(s)\n",dia);

    return 0;

}