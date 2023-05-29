#include<stdio.h>
#include<string>


float calculadora(float , char , float);
int main(){
    float n1 , n2 , result;
    char operacao;
    printf("<operando>");
    scanf("%f",&n1);
    printf("<operacao>");
    scanf("%s",&operacao);
    printf("<operando>2\n");
    scanf("%f",&n2);
    result = calculadora(n1 , operacao, n2);
    printf("O resultado foi %.2f\n",result);
    return 0;
}

float calculadora(float n1 , char tipo , float n2){
    float result;
    if(tipo == 'p'){
            result = n1 + n2;
    }
    else if(tipo == 's'){
        result = n1 - n2;
    }
    else if(tipo == 'm'){
        result = n1 *n2;
    }
    else if(tipo == 'd'){
        if(n2== 0){
            printf("Imossivel dividir , denominador = 0\n");
        }
        else{
            result = n1/n2;
        }
    }
    else{
        printf("Operacao invalida\n");
    }
        return result;
}