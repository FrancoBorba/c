#include<stdio.h>

int main(){

    int n1 , n2;

    printf("Digite um numero\n");
    scanf("%i",&n1);
    printf("Digite outro numero\n");
    scanf("%i",&n2);

    if(n1 > n2){
        printf(" O maior foi = %i\n",n1);
               }
    else{
        printf(" O maior foi = %i\n",n2);
        }

    return 0;
}