#include<stdio.h>
#include<cstdlib>
#include<ctime>

int main(){

    srand(time(0));
    int veta[5] , vetb[5] , vetc[5];
    for (int i = 0; i < 5; i++)
    {
        veta[i] = 1 + rand() % 10;
    }
    for(int i = 0 ; i < 5 ; i++){
        if(veta[i]%2==0){
            vetb[i] = veta[i];
        }
        else{
            vetc[i] = veta[i];
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        if(veta[i]%2 == 1){
            vetb[i] = 0;
        }
        else{
            vetc[i] = 0;
        }
    }

     for(int i = 0 ; i <5 ; i++){
        printf(" %i      ",veta[i]);
    }
        printf("\n");
     for(int i = 0 ; i < 5 ; i++){
        printf(" %i      ",vetb[i]);
    }
      printf("\n");
     for(int i = 0 ; i < 5 ; i++){
        printf(" %i      ",vetc[i]);
    }
    
}