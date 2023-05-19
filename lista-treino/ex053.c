#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num , div ,i;
    div = 0;
    printf("Digite um numero\n");
    scanf("%i",&num);

    for(i=1 ; i <=num ; i++){
        if(num%i== 0){
            div++;
        }
    }

    if(div == 2){
        printf("Numero primo");
    }
    else{
        printf(" Não é primo");
    }

}