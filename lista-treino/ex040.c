#include<stdio.h>

int main(){

    int  n1 , n2 ,n3 , n4 ,n5 , soma ;
    float media;

    printf("Digite o numero 1\n");
    scanf("%i",&n1);
    printf("Digite o numero 2\n");
    scanf("%i",&n2);
    printf("Digite o numero 3\n");
    scanf("%i",&n3);
    printf("Digite o numero 4\n");
    scanf("%i",&n4);
    printf("Digite o numero 5\n");
    scanf("%i",&n5);

    soma = n1 + n2 + n3 + n4 + n5;
    media = soma/5;

    printf("A soma foi %i\n",soma);
    printf("A media foi %f",media);

    return 0;
}