#include<stdio.h>

void mediaA( float , float , float&);
void mediaP(float , float , float&);
int main(){

    float n1 , n2 , n3 ;
    int opc;
    printf("Digite o primeiro numero\n");
    scanf("%f", &n1);
    printf("Digite o segundo numero\n");
    scanf("%f",&n2);
    printf("Digite o terceiro numero\n");
    scanf("%f",&n3);
    printf("Qual media deseja calcular\n 1- Aritimetica \n 2-Ponderada \n 3-Harmonica\n");
    scanf("%i",&opc);
    if(opc==1){
        mediaA(n1, n2 ,n3);
        printf("A media aritimetica = %.2f",n3);
    }
    else if( opc ==2){
        mediaP(n1, n2 , n3);
        printf("A media ponderada = %.2f",n3);

    }
    
    

    
}

void mediaA( float n, float m , float& v){

    v = (n+m+v)/3;

}
void mediaP(float n , float m , float& v){
    v = (n*1 + m*3 + v*6)/10;
}