#include<stdio.h>

int main(){

    int n1 , n2 , n3 , maior , menor;
    

    printf("Digite um numero \n");
    scanf("%i" ,&n1);
    printf("Digite um numero \n");
    scanf("%i" ,&n2);
    printf("Digite um numero \n");
    scanf("%i" ,&n3);

    if( n1 > n2 && n2 > n3){
        printf(" Em ordem decrescente %i , %i , %i", n1 , n2 ,n3);
                           }
    if(n1 > n2 && n1 > n3>n2){
        printf(" Em ordem decrescente %i , %i , %i", n1 , n3 ,n2);
                             }
    if(n2 > n1 && n1 > n3){
        printf(" Em ordem decrescente %i , %i , %i", n2 , n1 ,n3);
                          }
    if( n2 > n1 && n2>n3>n1){
        printf(" Em ordem decrescente %i , %i , %i", n2 , n3 ,n1);
                            }
    if(n3 > n1 && n1 > n2){
        printf(" Em ordem decrescente %i , %i , %i", n3 , n1 ,n2);
    }
    if(n3 > n1 && n3>n2>n1){
        printf(" Em ordem decrescente %i , %i , %i", n3 , n2 ,n1);
    }

    return 0;
}
     