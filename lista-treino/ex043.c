#include<stdio.h>

int main(){

      int n1 , n2 , i, soma;
      soma = 0;

    printf("Digite um numero \n");
    scanf("%i",&n1);
    printf("Digite outro numero \n");
    scanf("%i",&n2);

    for(i=n1 + 1; i < n2 ; i++){

        printf("%i\n",i);
        soma = soma + i;
    }
    printf("A soma dos numeros no intervalo foi %i",soma);
    return 0;
}