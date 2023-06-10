#include<stdio.h>


int ePrimo(int&);

int main(){

    int n1;

    printf("Digite um numero para analisar se eh primo\n");
    scanf("%i",&n1);
    ePrimo(n1);


}

int ePrimo(int& n){
    
int  div ,i;
    div = 0;
      for(i=1 ; i <=n ; i++){
        if(n%i== 0){
            div++;
        }
    }

    if(div == 2){
        printf("NUMERO PRIMO");
        return 0;
    }
    else{
        printf("NAO EH PRIMO");
        return 1;
    }
    return div;

}

