#include<stdio.h>

//Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
int main(){

    int inicio, fim , total;

    printf("Que horas começou a jogar? \n");
    scanf("%i",&inicio);
    printf("Que horas parou de jogar?\n");
    scanf("%i",&fim);

    if(fim==inicio){
        total = 24;
    }
    if(fim > inicio){
        total = fim - inicio;
    }
    if( inicio > fim){
        total = (fim+24) - inicio;
    }

    printf("O JOGO DUROU HORA(S) %i\n",total);

    return 0;

}