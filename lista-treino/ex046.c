#include<stdio.h>

int main(){

    int num , par , impar ,i ;

    par = 0;
    impar =0;

    for(i=1 ; i<=10 ;i++){

        printf("Digite um numero \n");
        scanf("%i",&num);

        if(num%2 == 0){
            par = par + 1;
        }
        else{
            impar = impar + 1;
        }
    }
    printf("%i pares\n",par);
    printf("%i impares\n",impar);
}