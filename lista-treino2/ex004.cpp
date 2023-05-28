#include <stdio.h>

bool analisa( int );

int main(){

    int num , result;
    printf("Digite um numero \n");
    scanf("%i",&num);
    result = analisa(num);
    printf("%i", result);
}

bool analisa(int n){
    
    if(n%5== 0){
        return true;
    }
    else{
       return false;
    }
    
}