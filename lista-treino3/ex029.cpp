#include<stdio.h>

char situacao(float p1 , float p2 , float p3 , int faltas , int aulas , float *media);

int main(){
    char resp;
    float n1 , n2 , n3 , media;
    int faltas , aulas;
    printf("Digite suas 3 notas\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    printf("Digite suas faltas \n");
    scanf("%i",&faltas);
    printf("Digite o total de aulas\n");
    scanf("%i",&aulas);
    resp = situacao(n1, n2 , n3 , faltas , aulas , &media);
    
    if( resp == 'f'){
        printf("Reprovado por falta\n");
    }
    else if( resp == 'a'){
        printf("Aprovado com media %.2f",media);
    }
    else{
        printf(" Reprovado com media %.2f",media);
    }

}
char situacao(float p1 , float p2 , float p3 , int faltas , int aulas , float *media){
    
    int resp;
    *media = (p1 + p2 + p3)/3;
    resp = (aulas*25)/100;


    if(faltas > resp ){
        return 'f';
    }
    else if((faltas < resp) && (*media >= 7)){
        return 'a';
    }
    else{
        return 'r';
    }















}