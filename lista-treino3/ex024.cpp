#include<stdio.h>

int main(){

    int *ptr1 , *ptr2 , x , y;
    x = 5 ; y = 10;

    ptr1 = &x;
    ptr2 = &y;
    printf(" %i       %i \n", ptr1 , ptr2);
    printf("%i        %i", *ptr1 , *ptr2);
}

