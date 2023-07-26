#include<stdio.h>


void func1 (int);
void func2 (int);
void func3 (int);

int main(){

    void (*f [3] )(int) = { func1 , func2 , func3};
    int opc , arg;
    printf("Digite um argumento para a funcao\n");
    scanf("%i",&arg);
    printf(" Digite um numero entre 1 e 3 ara chamar a funcao e 4 para terminar\n");
    scanf("%i",&opc);

    while( (opc >= 1 )&&(opc < 4)){
        (*f[opc-1])(arg);
        printf(" Digite um numero entre 1 e 3 ara chamar a funcao e 4 para terminar\n");
    scanf("%i",&opc);
    }
    printf("Execução terminada\n");



}
void func1 (int a){
    printf("A funcao 1 foi chamada \n");
    a = a *2;
    printf(" O argumento agora eh %i\n",a);

}
void func2 (int a){
    printf("A funcao 2 foi chamada \n");
    a = a *3;
    printf(" O argumento agora eh %i",a);

}
void func3 (int a){
    printf("A funcao 1 foi chamada \n");
    a = a *4;
    printf(" O argumento agora eh %i",a);

}