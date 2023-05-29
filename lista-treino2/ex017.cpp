#include<stdio.h>
#include<cmath>

float dAB(float , float , float , float);

int main(){

    float x1,y1,x2,y2;

    printf("Digite as coordenadas do primeiro ponto\n");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Digite as coordenadas do segundo ponto\n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    dAB(x1,y1,x2,y2);


}

float dAB(float x1 , float y1 , float x2 , float y2){

    float p1 , p2 , result;
    p1 = x2 - x1;
    p2 = y2 - y1;
    result = sqrt((pow(p1,2) + pow(p2,2)));
    printf("O resultuado foi %f\n",result);

    return result;
}