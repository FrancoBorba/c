#include<stdio.h>
#include<locale.h>

 

int main(){
    setlocale(LC_ALL, "Portuguese"); 
    int n1;

    printf("Digite um numero\n");
    scanf("%i",&n1);

    if(n1>0){
        printf("O numero é positivo");
            }
    else{
        printf("O numero é negativo");
        }

    return 0;
}