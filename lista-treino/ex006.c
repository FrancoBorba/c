#include<stdio.h>
#include<math.h>

#define pi 3.14; // declaração de constante

int main(){

    float area , raio;
    

    printf("Digite o raio\n");
    scanf("%f",&raio);

    area = pow(raio,2)*pi;

    printf("O raio foi %f", area);

    return 0;


}