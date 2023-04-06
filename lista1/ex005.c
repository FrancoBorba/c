#include<stdio.h>

int main(){

    float  quantidade , valor ;
    int codigo;

    printf("Insira o codigo do item \n");
    scanf("%i", &codigo);
    printf("Insira a quantidade \n");
    scanf("%f", &quantidade);

    switch(codigo){
        case 1:{
            valor = quantidade * 4;
            break;
            }
        case 2:{
             valor = quantidade *4.5;
             break;
             }
        
        case 3:{
            valor = quantidade*5;
            break;
            }
        case 4:{
             valor = quantidade*2;
             break;
             }
        
        case 5:{
            valor = quantidade*1.5;
            break;
            }
                   }
        printf("Total: R$ %.2f\n", valor);

        return 0;

    }
    
    
     
  
    
