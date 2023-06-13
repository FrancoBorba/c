#include<stdio.h>
#include<ctime>
#include<cstdlib>

int cartas();
int main(){
    srand(time(0));
    int c1, c2, c3 , c4 ,c5 ,c6 , soma , sentinela;
    



    do{
    c1 = cartas();
    c2 = cartas();
    c3 = cartas();
    soma = c1 + c2 + c3;
    printf("Suas cartas são\n");
    printf("%i\n",c1);
    printf("%i\n",c2);
    printf("%i\n",c3);


    if(soma == 21){
        printf("Voce ganhou o jogo\n");
        
    }
         else if( soma > 21){
        printf("Voce perdeu o jogo\n");
        
    }
        else{
        int opc;
        printf(" A soma de suas cartas foi = %i\n", soma);
        printf("Deseja comprar mais uma carta? 1- Sim \n 2- Nao\n");
        scanf("%i",&opc);
        if(opc == 2){
            printf(" Encerrando o jogo\n");
            
        }
        else{
            c4 = cartas();
            printf("Sua nova carta foi %i\n" , c4);
            soma = soma + c4;
                    if(soma == 21){
                          printf("Voce ganhou o jogo\n");
                         
                    }
                    else if( soma > 21){
                          printf("Voce perdeu o jogo\n");
                         
                    }
                    else {
                        opc = 0;
                            printf(" A soma de suas cartas foi = %i\n", soma);
                            printf("Deseja comprar mais uma carta? 1- Sim \n 2- Nao\n");
                            scanf("%i",&opc);
                                if(opc == 2){
                                    printf(" Encerrando o jogo\n");
                                   
                                }
                                else{
                                        c5 = cartas();
                                        printf("Sua nova carta foi %i\n" , c5);
                                        soma = soma + c5;
                                                if(soma == 21){
                                                    printf("Voce ganhou o jogo\n");
                                                   
                                                 }
                                                    else if( soma > 21){
                                                        printf("Voce perdeu o jogo\n");
                                                    
                                                    }
                                                    else{
                                                         printf(" A soma de suas cartas foi = %i\n", soma);
                                                        printf("Deseja comprar mais uma carta? 1- Sim \n 2- Nao\n");
                                                        scanf("%i",&opc);
                                                                if(opc == 2){
                                                                    printf(" Encerrando o jogo\n");
                                   
                                                                 }
                                                                 else{
                                                                    c6 = cartas();
                                                                    printf("Sua nova carta foi %i\n" , c6);
                                                                    soma = soma + c6;
                                                                            if(soma == 21){
                                                                                 printf("Voce ganhou o jogo\n");
                                                   
                                                                             }
                                                                               else if( soma > 21){
                                                                                     printf("Voce perdeu o jogo\n");
                                                    
                                                                                    }
                                                                 }
                                                    }
                                     }
                    }
                    
        }
    }
    printf("Deseja jogar de novo , digite 1 caso sim e 2 caso nao\n");
    scanf("%i",&sentinela);

    }while(sentinela != 2);
    




}

int cartas( ){
    int x;
    x = 1 + rand()%10;
    return x;
}
