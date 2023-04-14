#include<stdio.h>

int main(){

    int i , num1 , num2 , serie , quantidade , opc;

    num1 = 1;
    num2 =1;
    
    printf("Digite a quantidade de termos\n");
    scanf("%i",&quantidade);
    if(quantidade > 16){
        printf("VALOR INVALIDO < LIIMITE DE 15 \n");
        printf("Digite a quantidade de termos\n");
        scanf("%i",&quantidade);
    }
    printf("1\n");
    printf("1\n");

    for(i=3 ; i<=quantidade ; i++){

        serie = num1 + num2;
        num1 = num2;
        num2 = serie;
        printf("%i\n",serie); 

    }
    printf("Deseja calcular outro fatorial?\n");
    printf("1-Sim\n");
    printf("2-Não\n");
    scanf("%i",&opc);

    switch (opc)
    {
    case 1:{
        printf("Digite a quantidade de termos\n");
    scanf("%i",&quantidade);
    if(quantidade > 16){
        printf("VALOR INVALIDO < LIIMITE DE 15 \n");
        printf("Digite a quantidade de termos\n");
        scanf("%i",&quantidade);
    }
    printf("1\n");
    printf("1\n");

    for(i=3 ; i<=quantidade ; i++){

        serie = num1 + num2;
        num1 = num2;
        num2 = serie;
        printf("%i\n",serie); 

    }
    printf("Deseja calcular outro fatorial?\n");
    printf("1-Sim\n");
    printf("2-Não\n");
    scanf("%i",&opc);


            } 
        break;
    case 2:{
        printf("TERMINO DO PROGAMA\n"); // TA ERRADO POIS A SELEÇÃO SÒ FUNCIONA UMA VEZ
    }
    default:
        break;
    }


}