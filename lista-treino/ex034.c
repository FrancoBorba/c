#include<stdio.h>

int main(){

     char senha , nome;

    printf("Digite seu nome \n");
    scanf("%s",&nome);
    printf("Digite sua senha \n");
    scanf("%s",&senha);

    while (senha == nome)
    {
        printf("SENHA INVALIDA \n");
        printf("Digite seu nome \n");
        scanf("%s",&nome);
        printf("Digite sua senha \n");
        scanf("%s",&senha);
    }
    printf("Tudo certo");
    return 0;

}