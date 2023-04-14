#include<stdio.h>

int main(){

    int i;
    float a , b;
    a = 80000;
    b = 200000;

        for( i = 0; a<=b; i++){

            a += a*0.03;
            b += b*0.015;
        }
    printf("A quantidade de anos para a população a se igualar ou passar foi %i",i);

}

