#include <stdio.h>

int main (){

    int conceito;

    printf("Digite sua nota \n");
    scanf("%i",&conceito);

    if((90 <= conceito) && (conceito<= 100)){
        printf("Conceito A \n");
                             }
    if((70 <= conceito) && (conceito<= 89)){
        printf("Conceito B \n");
                            }
    if((50 <= conceito) && (conceito<=69)){
        printf("Conceito C \n");
                           }
    if((30 <= conceito)&& (conceito<=49)){
        printf("Conceito D \n");
                           }
    if(conceito <=29){
        printf("Conceito E \n");
                     }
}