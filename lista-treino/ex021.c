#include<stdio.h>
#include<locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese"); 
    float p1 , p2 , p3 , menor;
    menor = 9999;

    printf(" Insira o preço do produto\n");
    scanf("%f",&p1);
    printf(" Insira o preço do produto\n");
    scanf("%f",&p2);
    printf(" Insira o preço do produto\n");
    scanf("%f",&p3);

    if(p1 < menor){
        menor = p1;
                 }
    if(p2 < menor){
        menor = p2;
                  }
    if(p3 < menor){
        menor = p3;
                  }
    printf("Compre o produto de custo = %f ", menor); // Acho que a questão não quer isso 
}