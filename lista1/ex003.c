#include<stdio.h>

int main(){

    float a , b, c ,media;

    printf("Digite a primeira nota\n");
    scanf("%f" , &a);
    printf("Digite a segunda nota\n");
    scanf("%f" , &b);
    printf("Digite a terceira nota\n");
    scanf("%f", &c);
    media = (2*a + 3*b + 5*c)/10;
    printf("MEDIA = %.1f" , media);

    return 0;

}