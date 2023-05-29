#include<stdio.h>

int funcaoA_B(int , int);
int funcaoB_A(int , int);
void funcaoIguais( );

int main (){

    int n ,m;

    printf("Digite o primeiro numero\n");
    scanf("%i",&n);
    printf("Digite o segundo numero\n");
    scanf("%i",&m);

    if(n < m){
        funcaoA_B(n, m);
    }
    else if ( m < n){
        funcaoB_A(n , m);
    }
    else{
        funcaoIguais();
    }
}

int funcaoA_B( int n ,int m){

    int resp = n;
    for ( int i =n ; i<=m ; i++){
        printf(" %i  ", resp);
        resp++;
    }
    return resp;
}
int funcaoB_A ( int n , int m){
    int resp = n;
    for(int i = n ; i >= m; i--){
        printf("%i  ", resp);
        resp--;
    }
    return resp;
}
void funcaoIguais( ){
    printf("Valores iguais");

}