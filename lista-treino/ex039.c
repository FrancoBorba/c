#include<stdio.h>

int main(){

    int maior , n1 , n2 ,n3 , n4 ,n5;
    maior = 0;
    

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

    if(n1 > maior){
        maior = n1;
    }
    if(n2 > maior){
        maior = n2;
    }
    if(n3 > maior){
        maior = n3;
    }
    if(n4 > maior){
        maior = n4;
    }
    if(n5 > maior){
        maior = n5;
    }

    printf("O maior numero foi %i", maior);

    return 0;




}