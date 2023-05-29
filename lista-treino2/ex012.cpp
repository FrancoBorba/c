#include<stdio.h>

float media( float , float , float , char);

int main(){

    float nota1, nota2 , nota3;
    char tipo;

    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota \n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota \n");
    scanf("%f",&nota3);
    printf("Digite o tipo de media\n A- Aritimetica \n P- Ponderada \n H- Harmonica\n");
    scanf("%s",&tipo);
    media(nota1 , nota2, nota3 , tipo);

}

float media (float n1 , float n2 , float n3 , char tipo){
    float result;
    if(tipo == 'a' || tipo == 'A'){
            result = (n1 + n2 + n3)/3;
            printf("A media foi = %.2f\n", result);
    }
    else if(tipo == 'p' || tipo == 'P'){
            result = (5*n1 + 3*n2 + 2*n3)/10;
            printf("A media foi = %.2f\n", result);
    }
    else if(tipo == 'h' || tipo == 'H'){
        result = 3/(1/n1 +1/n2 + 1/n3);
        printf("A media foi = %.2f\n", result);
    }
    else{
        printf("Valor Invalido");
        
    }

    return result;

}