#include<stdio.h>
#include<math.h>

int main(){

   double a , b , c , delta , r1 , r2;

    printf("Digite um valor para A\n");
    scanf("%lf",&a);
    printf("Digite um valor para B\n");
    scanf("%lf",&b);
    printf("Digite um valor para C\n");
    scanf("%lf",&c);

    delta = pow(b,2) -4*a*c;

    if(delta < 0){
        printf("Impossivel calcular\n");
    }
   esle{ 
        r1 = (-b + sqrt(delta))/(2*a);
        r2 = (-b - sqrt(delta))/(2*a);

             printf("R1 = %.5lf\n",r1);
             printf("R2 = %.5lf\n",r2);
    }

    return 0;

}