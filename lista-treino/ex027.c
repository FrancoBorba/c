#include<stdio.h>

int main(){

    int peso , excesso , multa;
    excesso = 0;
    multa = 0;

    printf("Digite o peso dos peixes\n");
    scanf("%i",&peso);

    if(peso > 50){
        excesso = peso -50;
        multa = excesso *4;
                 }
    printf(" Execesso de peso = %i\n",excesso);
    printf("Multa = %i reais\n",multa);

    return 0;
}