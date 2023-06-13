#include<stdio.h>

template<class tipo> tipo  multiplica( tipo n1 , tipo n2);

int main(){

    int n1 , n2 , resp_int;
    float x1 , x2 , resp_float;
    printf("Digite dois numeros inteiros\n");
    scanf("%i %i",&n1 , &n2);
    printf("Digite dois numeros reais\n");
    scanf("%f %f",&x1 , &x2);
    resp_int = multiplica(n1 , n2);
    resp_float = multiplica(x1 , x2);

    printf("%i\n",resp_int);
    printf("%.3f\n",resp_float);
    
}
template<class tipo> tipo  multiplica( tipo n1 , tipo n2){
    return n1 * n2;
}