#include<stdio.h>

int absoluto(int);

int main(){

    int num, resp;
    
    for(int i =1 ; i<=50 ; i++){
        printf("Digite um numero \n");
        scanf("%i",&num);
        resp = absoluto(num);
        printf("O valor absoluto = %i\n",resp);
    }
    return 0;
}

int absolto(int n){

    if(n >=0){
        n = n*1;
    }
    else{
        n = n*-1;
        
    }
    return n;
}