#include<stdio.h>

int main(){

    int i , num1 , num2 , serie , quantidade;

    num1 = 1;
    num2 =1;
    
    printf("Digite a quantidade de termos\n");
    scanf("%i",&quantidade);
    printf("1\n");
    printf("1\n");

    for(i=3 ; i<=quantidade ; i++){

        serie = num1 + num2;
        num1 = num2;
        num2 = serie;
        printf("%i\n",serie); 

    }


}