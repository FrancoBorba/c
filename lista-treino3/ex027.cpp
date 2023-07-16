#include<stdio.h>

void trocasemor( int *h1 , int *h2 , int *h3);

int main(){

    int x , y , z;

    printf("Digite a altura 1\n");
    scanf("%i",&x);
    printf("Digite a altura 2\n");
    scanf("%i",&y);
    printf("Digite a altura 3\n");
    scanf("%i",&z);
    trocasemor(&x, &y , &z);
    printf(" As alturas em ordem descrescente %i ,  %i e %i",x,y,z);



}
void trocasemor( int *h1 , int *h2 , int *h3){

    
    if((*h1 > *h2) && (*h2 < *h3)){
        int lixo;
        lixo = *h2;
        *h2 = *h3;
        *h3 = lixo;
    }
    if( (*h2 > *h1) && (*h3 > *h2)){ 
        int lixo;
        lixo = *h1;
        *h1 = *h3;
        *h3 = lixo;
    }
    if( (*h2 > *h1)&& (*h1 > *h3 )){
        int lixo;
        lixo = *h1;
        *h1 = *h2;
        *h2 = lixo; 
    }
}