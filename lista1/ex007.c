#include<stdio.h>

int main(){
     
    int tempo, horas , min , seg;
    printf("Digite a duração em segundos\n");
    scanf("%i",&tempo);

    horas = tempo/3600;
    min = (tempo%3600)/60;
    seg = (tempo%3600)%60;

    printf("%i : %i : %i\n",horas,min,seg);


    return 0;

}