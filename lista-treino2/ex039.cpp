#include<stdio.h>


template < class tipo > void multiplos( tipo& soma, tipo x , int n);





int main(){

    int in1 , in2 , isoma = 1 , menu;
    float fn1 , fn2 , fsoma =1 ;

    printf("Digite 1 se for utilizar apenas valores inteiros e 2 se for utilizar valores reais\n");
    scanf("%i",&menu);

    if(menu == 1){
        printf("Digite um valor inicial\n");
        scanf("%i",&in1);
        printf("Digite um valor para ver o resultado da soma dos multiplos do valor inicial ate o mesmo\n");
        scanf("%i",&in2);
          multiplos(isoma , in1  , in2);
            printf("O resultado foi %i",isoma);
    }
    else{
          printf("Digite um valor inicial\n");
        scanf("%f",&fn1);
        printf("Digite um valor para ver o resultado da soma dos multiplos do valor inicial ate o mesmo\n");
        scanf("%f",&fn2);
            multiplos(fsoma , fn1  , fn2);
            printf("O resultado foi %f",fsoma);
    }


    

}
template<class tipo> void multiplos( tipo& soma , tipo x , tipo n){


   for(int i = 1; i <= n; i++){
        soma += i * x;
   }
    

}
