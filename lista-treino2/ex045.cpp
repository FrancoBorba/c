#include<stdio.h>

template < class tipo> void troca( tipo& x , tipo& y);


int main(){
    int i1 , i2;
    float r1, r2;
    char c1, c2;
    printf("Digite um numero inteiro \n");
    scanf("%i",&i1);
    printf("Digite outro numero inteiro\n");
    scanf("%i",&i2);      
    printf("Digite um numero real\n");
    scanf("%f",&r1);
    printf("Digite outro numero real\n");
    scanf("%f",&r2);
    printf("Digite uma letra\n");
    scanf("%s",&c1);
    printf("Digite uma letra\n");
    scanf("%s",&c2);
    printf(" A ordem dos inteiros numeros antes da funcao %i - %i\n",i1 , i2);
    troca(i1, i2);
    printf(" A ordem dos inteiros numeros depois da funcao %i - %i\n",i1 , i2);
    printf("A ordem dos numeros reais antes da funcao %.2f - %.2f\n",r1 , r2);
    troca(r1,r2);
    printf("A ordem dos numeros reais depois da funcao %.2f - %.2f\n",r1 , r2);
    printf("A ordem das letras antes da funcao %s-%c\n",c1 , c2);
    troca(c1,c2);
    printf("A ordem das letras depois da funcao %s-%c\n",c1 , c2);







}
template < class tipo> void troca( tipo& x , tipo& y){

    tipo  a =x;
    x = y;
    y = a;
    
}