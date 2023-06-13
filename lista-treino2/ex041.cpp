#include<stdio.h>

template< class tipo> 
tipo proximo(tipo x);

int main(){

    int a , result;
    char b , resp;
    printf("Digite um numero para receber seu consecutivo\n");
    scanf("%i",&a);
    printf("Digite uma letra para ver sua consecutiva\n");
    scanf("%s",&b);
   result = proximo(a);
   resp = proximo(b);
   printf(" O consecutivo foi= %i\n",result);
    printf(" O consecutivo foi= %c\n",resp);
   

    
    



}

template<class tipo>
tipo proximo(tipo x){

    x = x +1;
    return x ;

}