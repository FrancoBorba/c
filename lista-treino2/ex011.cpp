#include<stdio.h>

int analisa(int);
int main(){

    int num;

    printf("Digite um numero \n");
    scanf("%i",&num);
    analisa(num);

}

int analisa( int m){

    if(m>0){
        printf("1");
    }
    else if(m < 0){
        printf("-1");
    } 
    else{
        printf("0");
    }
    return m;


}