#include<stdio.h>
#include<math.h>

int main(){

    float salario , novo , percentual , aumento;

    printf("Informe seu salário\n");
    scanf("%f",&salario);

    if(salario <= 1280){
        novo = salario + (salario*0.20);
        percentual = 20;
        aumento = (salario*0.20);
         printf( "Salario antigo = %f\n  Percentual aplicado = %f\n Valor aumentado = %f\n Novo salario %f\n" , salario , percentual,aumento , novo);
                       }
    if((1280 < salario) && (salario<= 1700)){
        novo = salario + (salario * 0.15);
        percentual = 15;
        aumento = (salario * 0.15);
        printf( "Salario antigo = %f\n  Percentual aplicado = %f\n Valor aumentado = %f\n Novo salario %f\n" , salario , percentual,aumento , novo);
                                }
    if((1700 < salario) && (salario<= 2500)){
        novo = salario + (salario *0.10);
        percentual = 10;
        aumento = (salario *0.10);
         printf( "Salario antigo = %f\n  Percentual aplicado = %f \n Valor aumentado = %f\n Novo salario %f\n" , salario , percentual,aumento , novo);
                              }
    if(salario > 2500){
        novo = salario *(salario *0.05);
        percentual = 5;
        aumento = (salario *0.05);
        printf( "Salario antigo = %f\n  Percentual aplicado = %f\n Valor aumentado = %f\n Novo salario %f\n" , salario , percentual,aumento , novo);
                     }
    return 0;
}