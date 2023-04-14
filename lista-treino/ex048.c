#include<stdio.h>

int main(){

    int  num1 , num2 , serie ;

    num1 = 1;
    num2 =1;
    
    
    printf("1\n");
    printf("1\n");
    
    do
    {
        serie = num1 + num2;
        num1 = num2;
        num2 = serie;
        printf("%i\n",serie); 

    } while (serie < 500);
    


}