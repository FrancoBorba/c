#include<stdio.h>

int main(){

    int a , b, i;
    float crescimentoA , crescimentoB;

    printf("Digite o tamanho da população A\n");
    scanf("%i",&a);
    printf("Digite o tamanho da população B\n");
    scanf("%i",&b);
    printf("Digite o crescimento da população A\n");
    scanf("%f",&crescimentoA);
    printf("Digite o crescimento da população B\n");
    scanf("%f",&crescimentoB);

    crescimentoA = crescimentoA / 100;
    crescimentoB = crescimentoB / 100;

    if(a < b){
        
        for(i=0; a<=b; i++){ 
        a += a*crescimentoA;
        b += b*crescimentoB;
                           }
    }
    else{
        for(i=0; a >= b ; i++){
            a += a*crescimentoA;
            b += b*crescimentoB;
                              }
    }

    printf("A quantidade de anos para a população a se igualar ou passar foi %i",i);
    







}