#include<stdio.h>

// NÃO TÀ FUNCIONANDO

int main(){

   char letra;

   printf("Digite seu sexo utilizando M ou F \n");
   scanf("%c",&letra);

   if(letra == "M" ){
    printf("MASCULINO");
                    }
        else{
                if(letra == "F"){
                printf("FEMININO");
                                }
                else {
                printf("NAO DEFINIDO");
                     }
        }
    return 0;
}