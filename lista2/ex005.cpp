#include<stdio.h>

int main(){

    int num1 , num2 , opc;

    printf("Digite um numero\n");
    scanf("%i",&num1 );
    printf("Digite outro numero\n");
    scanf("%i",&num2);
    printf("1-Adição\n");
    printf("2-subtração\n");
    printf("3-multiplicação\n");
    printf("4-divisao\n");
    scanf("%i",&opc);

    switch(opc){

        case 1:{
            printf("%i",(num1+num2));
            break;
        }
        case 2:{
            printf("%i",(num1-num2));
            break;
        }
        case 3:{
            printf("%i",(num1*num2));
            break;
        }
        case 4:{
            printf("%i",(num1/num2));
            break;
        }
    }

    return 0;
}