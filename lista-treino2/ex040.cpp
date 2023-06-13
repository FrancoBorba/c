#include<stdio.h>

int media(int , int , int , int);
float media( float , float , float);
double media(double , double);



int main(){

    int menu ;
    printf("Escolha qual media deseja calcular\n");
    printf("1- 4 inteiros\n 2- 3 reais \n 3- 2 reais\n");
    scanf("%i",&menu);

        if(menu == 1){
            int n1 , n2 , n3 , n4 ;
            float resp;
            printf("Digite o primeiro numero\n");
            scanf("%i",&n1);
            printf("Digite o segundo numero\n");
            scanf("%i",&n2);
            printf("Digite o terceiro numero\n");
            scanf("%i",&n3);
            printf("Digite o quarto numero\n");
            scanf("%i",&n4);
            resp = media(n1,n2,n3,n4);
            printf("%f",resp);

        }
        else if(menu == 2){
            float n1 , n2 , n3, resp;
            printf("Digite o primeiro numero\n");
            scanf("%f",&n1);
            printf("Digite o segundo numero\n");
            scanf("%f",&n2);
            printf("Digite o terceiro numero\n");
            scanf("%f",&n3);
            resp = media(n1,n2,n3);
            printf("%f",resp);

        }
        else{
            double n1 , n2 , resp;
            printf("Digite o primeiro numero\n");
            scanf("%lf",&n1);
            printf("Digite o segundo numero\n");
            scanf("%lf",&n2);
            resp = media(n1 , n2);
            printf("%lf",resp);

        }


}

int media(int n1 , int n2 , int n3 , int n4){

        float resp;
        resp = (n1 + n2 + n3 + n4)/4;
        return resp;
}
float media( float n1 , float n2 , float n3){

        return (n1 + n2 + n3)/3;
}
double media( double n1 , double n2){

        return (n1+n2)/2;
}