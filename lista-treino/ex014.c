#include<stdio.h>

int main(){

    float tamanho , velocidade , result;

    printf("Digite o tamanho do arquivo em MB\n");
    scanf("%f",&tamanho);
    printf("Digite a velocidade em Mpbs\n");
    scanf("%f",&velocidade);

    // Calculo da velocidade Tamanho do arquivo em megabytes / (velocidade de download em megabits / 8) = tempo em segundos.

    result = (tamanho/(velocidade/8))*60;

    printf("Tempo de dowload = %f", result);

    return 0;

}