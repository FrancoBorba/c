#include<stdio.h>



int main(){

    
    char nome , estado;
    int idade;
    float salario;

    do{
        printf("Digite seu nome \n");
        scanf("%s", nome);
    }while(nome <= 3); // não sei medir a quantidade de letras de um char

    do{
        printf("Digite sua idade \n");
        scanf("%i",&idade);

    }while((idade < 0) || (idade > 150));

    do{
        printf("Digite seu salario \n");
        scanf("%f",&salario);
    }while(salario < 0);

    do{
        printf("Digite seu estado civil\n");
        scanf("%c",&estado);

    }while (estado != 's' && estado != 'c' && estado != 'v' && estado != 'd' && estado != 'u');

    printf("%s\n",nome);
    printf("%i\n",idade);
    printf("%.1f\n",salario);
    printf("%c\n",estado);

    return 0;


}