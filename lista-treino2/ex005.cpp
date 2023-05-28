#include<stdio.h>

void contador();

int main () {
    int n;
    printf("Digite um numero\n");
    scanf("%i",&n);
    printf("O numero digitado foi");
    contador();
    printf("  %i",n);

}

void contador(){
    for(int i =1 ; i <= 1000000000 ;i++);
}