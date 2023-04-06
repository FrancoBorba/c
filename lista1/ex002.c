#include<stdio.h>

int main() {
    float a ,b , media;

    printf("Digite a primeira nota\n");
    scanf("%f", &a);
    printf("Digite a segunda nota\n");
    scanf("%f", &b);
    media = (3.5*a + 7.5*b)/11;

    printf("MEDIA = %.5f\n", media);
    
}