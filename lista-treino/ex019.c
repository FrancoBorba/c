#include<stdio.h>

int main(){

    int n1 , n2 , n3 , maior;
    maior = 0;

    printf("Digite um numero \n");
    scanf("%i" ,&n1);
    printf("Digite um numero \n");
    scanf("%i" ,&n2);
    printf("Digite um numero \n");
    scanf("%i" ,&n3);

    if(n1 > maior){
        maior = n1;
                  }
    if(n2> maior){
        maior = n2;
                 }
    if(n3> maior){
        maior = n3;
                 }
    printf("O maior numero = %i", maior);

    return 0;

}