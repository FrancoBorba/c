#include<stdio.h>

int soma( int , int);
float soma( int , float);
int soma(int , int , int);

int main(){
    float n4;
    int n1 , n2 , n3 , result;
    float resul;
    int opc;
    printf("Digite o primeiro numero inteiro\n");
    scanf("%i", &n1);
    printf("Digite o segundo numero inteiro\n");
    scanf("%i",&n2);
    printf("Digite o terceiro numero inteiro\n");
    scanf("%i",&n3);
    printf("Digite o numero real\n");
    scanf("%f",&n4);
    printf("O que deseja calcular\n");
    printf("1- A soma de dois inteiros\n 2- A soma de um float com inteiro \n 3- A soma de tres inteiros\n");
    scanf("%i",&opc);
    if(opc ==1){
        result = soma(n1 , n2);
        printf("O resultado foi %i\n",result);
    }
    else if( opc == 2){
        resul = soma(n1,n4);
        printf("O resultado foi %.2f \n", resul);
    }
    else{
        result = soma(n1, n2 , n3);
        printf("O resultado foi %i\n",result);
    }



}

int soma(int n1 , int n2){

    int soma;
    soma = n1 + n2;

    return soma;

}
float soma( int n1 , float n2){
    float soma;
    soma = n1 + n2;
    return soma;
}
int soma(int n1 , int n2 , int n3 ){
        
    int soma;

    soma = n1 + n2 + n3;
    return soma;

}