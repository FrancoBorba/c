#include<stdio.h>

float raiz(float);

int main(){
    float num , resp;
    printf("Digite um numero\n");
    scanf("%f",&num);
    resp = raiz(num);
    printf(" A raiz do numero = %.2f\n", resp);


}

float raiz(float n){
    float erroMaximo = n * 0.0001; // 0.01% de erro máximo

    float estimativa = n / 2.0; // Começamos com uma estimativa inicial
    while ((estimativa * estimativa) - n > erroMaximo) {
        estimativa = (estimativa + (n / estimativa))/2.0; // Fórmula de Newton-Raphson para melhorar a estimativa
    }

    return estimativa ;

}