#include<stdio.h>

int encaixa(int, int);
int segmento(int , int);
int main(){

   int a , b;
    printf("Digite o primeiro numero \n");
    scanf("%i",&a);
    printf("Digite um numero para ver se 'encaixa' \n");
    scanf("%i",&b);
    //encaixa( a , b);
    segmento(a,b);

}

int encaixa(int a , int b){
   
   int cont = 0  , compara , analisa = 1, c;
    c = b;
    do{

        b = b/10;
        cont++;
    }while( b != 0);
    
    //printf("%i\n", cont);


    
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

int segmento(int a , int b){

    int cont = 0  , compara , analisa = 1, c ;
    
    c = b;
    do{

        a = a/10;

    }while((a%10)!=(b%10)); 

    do{

        b = b/10;
        cont++;
    }while( b != 0);
    
    do{
        analisa = analisa *10;
        cont--;
    }while(cont != 0);
    compara = a%analisa;
    printf("%i\n", compara);
     if(c == compara){
        printf(" B eh segmento de A \n");
    }
    else{
        printf("B não eh segmento de A \n");
    }

    return 0;
}