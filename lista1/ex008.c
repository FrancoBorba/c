#include<stdio.h>
#include<math.h>

int main(){
    float a , b ,c , triangulo , circulo, trapezio , quadrado , retangulo;

    printf("Digite um valor\n");
    scanf("%f",&a);
    printf("Digite um valor\n");
    scanf("%f",&b);
    printf("Digite um valor\n");
    scanf("%f",&c);

    triangulo = (a*c)/2;
    circulo = pow(c,2)*3.14159; 
    trapezio = ((a+b)*c)/2;
    quadrado = b*b;
    retangulo = a*b;
    
    printf("TRIANGULO: %.3f\n",triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n",trapezio);
    printf("QUADRADO: %.3f\n",quadrado);
    printf("RETANGULO: %.3f\n", retangulo);

    return 0;

}