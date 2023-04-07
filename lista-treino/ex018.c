#include<stdio.h>

int main(){
    char letra;

    printf("Digite uma letra \n");
    scanf("%c", &letra);

    if(letra == 'a' || letra  == 'b' || letra  == 'c' || letra  == 'd' || letra  == 'e'){
        printf("VOGAL");
                                                                                        }
    else{
        printf("CONSOANTE");
        }

    return 0;
}