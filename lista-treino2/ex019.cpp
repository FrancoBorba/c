#include<stdio.h>

int encaixa(int, int);
int main(){

   int a , b;
    printf("Digite o primeiro numero \n");
    scanf("%i",&a);
    printf("Digite um numero para ver se 'encaixa' \n");
    scanf("%i",&b);
    encaixa( a , b);

}

int encaixa(int a , int b){
   
   int cont = 0  , compara , analisa = 1, c;


    c = b;
    do{

        b = b/10;
        cont++;
    }while( b != 0);
    
    printf("%i\n", cont);


    
    do{
        analisa = analisa *10;
        cont--;
    }while(cont != 0);

    compara = a%analisa;
    printf("%i\n", compara);
    if(c == compara){
        printf(" B se encaixa em A \n");
    }
    else{
        printf("B não se encaixa em A \n");
    }

    return 0;
    
}  