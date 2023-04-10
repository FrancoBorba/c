#include<stdio.h>

// 1 lata pintam 54 metros
// 1 litro para cada 3 metros quadrados
int main(){

    int area, litros, total, latas ;

    printf("Digite a area a ser pintada\n");
    scanf("%i",&area);

    litros = area/3;
    

    if(litros/18 == 0){
        total = 80;
                      }
    else{
        total = 80*((litros/18) + 1);
        }
    
    latas = ((litros/18) + 1);
   printf("Deve se comprar %i latas dando um total de %i",latas,total);
   
    return 0;
}