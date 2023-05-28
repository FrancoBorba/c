#include <stdio.h>

int inverte(int);

int main(){
    int n , result;
    printf("Digite um numero \n");
    scanf("%i",&n);
    result =inverte(n);
    printf("%i", result);
}

int inverte(int n){

    int resp = 0;
        while(n>0){
        resp = resp*10 + n%10;
        n = n/10;
}
    return resp;
}