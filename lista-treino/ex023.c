#include<stdio.h>

int main(){

    char turno;

    printf("Digite em qual turno estuda com M ou V ou N \n");
    scanf("%c",&turno);

    if(turno == 'M' || turno == 'm'){
        printf("MATUTINO");
    }
    else{
        if(turno == 'V' || turno == 'v'){
                printf("VESEPERTINO");
                                        }
      else{
                if(turno =='N' || turno == 'n'){
                    printf("NOTURNO");
                                               }
            else{
                    printf("INVALIDO"); 
                 }  
           }
         }
    return 0;
}