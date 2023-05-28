#include<stdio.h>

int power(int , int);

int main(){

    int pot , exp;

    printf("Digite a base\n");
    scanf("%i",&pot);
    printf("Digite o expoente\n");
    scanf("%i",&exp);
    power(pot , exp);

}

int power(int m , int n){
    int result = m;
    for( int i =1 ; i < n ; i++){
        result = result * m;
    }
    printf("%i", result);
    return result;
}



