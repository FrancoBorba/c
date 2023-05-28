#include<stdio.h>

int contadigitos(int , int);


int main(){
    int num, contador , resp;

    printf("Digite um numero \n");
    scanf("%i",&num);
    printf("Digite um numero para saber quantas vezes ele aparace no numero acima\n");
    scanf("%i",&contador);
    resp = contadigitos(num, contador);
    printf("%i",resp);
}


int contadigitos( int m , int n){
    int cont = 0;

    while(  m!= 0){
        if( m%10 == n){
            cont++;
        }
        m = m/10;
    }
    
    return cont;
}

