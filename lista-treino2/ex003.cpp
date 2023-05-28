#include<stdio.h>

int analisa(int);

int main(){
    int num;
    printf("Digite um numero \n");
    scanf("%i",&num);
    analisa(num);
}

int analisa( int num ){
    if(num%2 == 0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}