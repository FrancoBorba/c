#include<stdio.h>

int divisor(int, int);

int main(){

    int n , m , resp;
    printf("Digite o primeiro numero\n");
    scanf("%i",&n);
    printf("Digite o segundo numero\n");
    scanf("%i",&m);
    resp = divisor(n,m);
    printf("%i", resp);

}

int divisor(int n , int m){

    bool result;

    if(n%m == 0){
        result = true;
        return result;
    }
    else{
        result = false;
        return result;
    }



}