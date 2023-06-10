#include<stdio.h>

int primo(int);
int ePrimo(int&);

int main(){

    int n1;

    printf("Digite um numero para analisar se eh primo\n");
    scanf("%i",&n1);
    ePrimo(n1);


}

int ePrimo(int& n){
    
    if(primo(n)== 2){
        printf("NUMERO PRIMO");
        return 0;
    }
    else{
        printf("NAO EH PRIMO");
        return 1;
    }

}

int primo(int num){

    int  div ,i;
    div = 0;
      for(i=1 ; i <=num ; i++){
        if(num%i== 0){
            div++;
        }
    }
    return div;
}