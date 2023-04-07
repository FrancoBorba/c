#include<stdio.h>
#include<math.h>

int main(){

    int n1 , n2;
    float n3;

    printf("Digite um numero inteiro\n");
    scanf("%i",&n1);
    printf("Digite um numero inteiro\n");
    scanf("%i",&n2);
    printf("Digite um numero real\n");
    scanf("%f", &n3);

    printf("A = %i\n" ,(2*n1)*(n2/2));
    printf("B= %f\n",(3*n1) + n3);
    printf("C= %f\n" ,pow(n3,3));

    return 0;

}