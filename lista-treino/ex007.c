#include<stdio.h>

int main(){

    int lado , area;

    printf("Digite o lado do quadrado\n");
    scanf("%i",&lado);

    area = lado*lado;

    printf("O dobro da area do quadrado = %i" ,2*area);

    return 0;

}