#include<stdio.h>

void troca(int *p1 , int *p2);
int main(){
    
    int x , y;
    printf(" Digite um valor para x\n");
    scanf("%i",&x);
    printf("Digite um valor para y\n");
    scanf("%i",&y);
    printf(" Os valores de x e y são %i e %i \n",x,y);
    troca(&x,&y);
    printf(" Os valores de x e y são %i e %i",x,y);
    
}
void troca(int *p1 , int *p2){
    int lixo;
    lixo = *p1;
    *p1 = *p2;
    *p2 = lixo;
}