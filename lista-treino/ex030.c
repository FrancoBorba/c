#include<stdio.h>

int main() {

    int opcao;

    printf( " Digite um numero ara o dia da semana sendo segunda 1 e domingo 7 \n");
    scanf("%i",&opcao);

    switch (opcao){

        case 1:{
            printf("Segunda \n");
            break;
                }
        case 2:{
            printf("Terça \n");
            break;
               }
        case 3:{
            printf("Quarta \n");
            break;
               }
        case 4:{
            printf("Quinta \n");
            break;
               }
        case 5:{
            printf("Sexta \n");
            break;
               } 
        case 6:{
            printf("Sabado \n");
            break;
               }
        case 7:{
            printf("Domingo \n");
            break;
               }
        default:{
            printf("Opcao invalida");
            break;
                }
               

    }

}