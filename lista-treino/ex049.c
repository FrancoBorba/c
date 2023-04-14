#include<stdio.h>

int main(){

    int n1 , i;

    

    printf("Digite um numero\n");
    scanf("%i",&n1);

    for(i=(n1-1); i >= 1 ;i= i -1){
        n1 = n1 * i ;

    }
    printf("O fatorial foi %i",n1);

    return 0;
}