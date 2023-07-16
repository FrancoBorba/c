#include<stdio.h>
#include<math.h>

void calcula_hexagono(int l , int *area , int *perimetro);
int main(){
    int l , perimetro , area;

    printf("Digite a area do hexagono\n");
    scanf("%i",&l);
    calcula_hexagono(l ,&area , &perimetro);
    printf(" A area foi %i\n",area);
    printf(" O perimetro foi %i\n",perimetro);

}

void calcula_hexagono(int l , int *area , int *perimetro){

    *perimetro = l*6;
    *area = (3*l*l*sqrt(3))/2;

}