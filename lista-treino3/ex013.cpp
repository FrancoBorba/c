#include<stdio.h>

int main(){
     int veta[10] , vetb[10] , vetc[10];

    printf("Insira os valores para os vetores A e B \n");

    for(int i = 0 ; i < 20 ; i++){

        if( i < 10){
           scanf("%i\n",&veta[i]); 
        }
        else{
            scanf("%i\n ",&vetb[i-10]);
        }

    }
    for( int i =0 ; i < 10 ; i++){
        if(veta[i] == vetb[i]){
            vetc[i] = veta[i];
        }
        else{
            vetc[i] = 0;       
        }
    }
      for(int i = 0 ; i < 10 ; i++){
        printf(" %i      ",vetc[i]);
    }
}