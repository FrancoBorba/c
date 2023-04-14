#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um numero\n");
    scanf("%i",&num);

    if((num%2 == 0) || (num%3==0)||(num%5==0)||(num%7==0)){ // MEIO ERRADO POIS NAO CONSIDERA O 2 , 3 , 5 e 7 COMO PRIMOS
        printf("Não é primo\n");
                                                          }
    else{
        printf("NUMERO PRIMO\n");
        }
}