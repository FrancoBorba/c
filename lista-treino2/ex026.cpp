#include<stdio.h>
#include<cstdlib>
#include<ctime>


int gerador();

int main(){ 
    int tentativas , compara;
    srand(time(0));
    compara = gerador();
    
    do{
    printf("Tente acertar um numero entre 1 e 50\n");
    scanf("%i", &tentativas);
    if( tentativas > compara){
        printf("Chute acima do valor real\n");
    }
    else{
        printf("Chute abaixo do valor real\n");
    }

    }while(tentativas != compara);
    printf("ACERTOU\n");








}

int gerador( ){
    int a;
    a = 1 + rand() %50;

    return a;

}