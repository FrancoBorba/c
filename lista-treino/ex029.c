#include <stdio.h>

// 1 lata pintam 108 metros
// 1 litro para cada 6 metros quadrados
// 1 galao pinta 21, 6

int main(){

    int area , litros , total , latas , opcao;
    

    printf("Digite a area a ser pintada\n");
    scanf("%i",&area);
    printf("Digite a opção de compra?\n");
    printf("1- Apenas latas de 18 Litros\n");
    printf("2- Apenas galões de 3,6 Litros \n");
    printf("3- misturar latas e galões, de forma que o preço seja o menor\n");
    scanf("%i",&opcao);

    switch (opcao)
    {
    case 1:{
            litros = area/6;
            latas = ((litros/18) + 1);

            if(litros/18 == 0){
                total = 80;
                              }
            else{
                total = 80 *((litros/18)+1);
            }
        printf("Deve se comprar %i latas dando um total de %i",latas,total);
       
        break;
            }
    case 2:{
            litros = area/6;
            latas = (litros/3.6)+1;

            if(litros/3.6 == 0){
                total = 25;
                              }
            else{
                total = 25*((litros/3.6)+1);
                }
            printf("Deve se comprar %i latas dando um total de %i",latas,total);

            // ta errada

            
           }
    default:
        break;
    }

    return 0;
}