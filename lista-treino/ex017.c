#include<stdio.h>




int main(){

   char letra;

   printf("Digite seu sexo utilizando M ou F \n");
   scanf("%c",&letra);

   if(letra == 'M' || letra == 'm'){  
    printf("MASCULINO");
                    }
        else{
                if(letra == 'F' || letra == 'f'){
                printf("FEMININO");
                                }
                else {
                printf("NAO DEFINIDO");
                     }
        }
    return 0;
}