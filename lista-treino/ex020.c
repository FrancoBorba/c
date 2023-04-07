#include<stdio.h>


int main(){

    int n1 , n2 , n3 , maior , menor;
    maior = 0;
    menor = 99999;

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

        if(n1 < menor){
        menor = n1;
                      }
        if(n2 < menor){
        menor = n2;
                      }
        if(n3 < menor){
        menor = n3;
                      }
    printf("O maior numero = %i\n", maior);
    printf("O menor numero = %i\n", menor);

}