#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num , div ,i;
        div = 0 ;

    printf("Digite o numero a ser analisado\n");
    scanf("%i",&num);

    for(i=i; i <= num ; i++){
        if(num%i == 0){
            div++;
        }
        
    }

    if(div == 2){
        printf("Numero primo\n");
    }  
    else{
        printf(" Não é primo\n");
        if(num%2 == 0){
            printf("Divisiel por 2\n");
        } 
        if(num%3 == 0){
            printf("Divisiel por 3\n");
        } 
        if(num%5 == 0){
            printf("Divisiel por 5\n");
        } if(num%7 == 0){
            printf("Divisiel por 7\n");
        } 
    }







}