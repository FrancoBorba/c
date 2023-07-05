#include<stdio.h>
#include<cstdlib>
#include<ctime>

void bubblesort(int vet[10]);
int main(){
    srand(time(0));
    int vet[10];
    

        for(int i = 0 ; i < 10 ; i++){
        vet[i] = 1 + rand() % 50;
    }
    printf("Vetor fora de ordem \n");
    for(int i = 0 ; i < 10 ; i++){
        printf("%i     ", vet[i]);
    }
    printf("\n");
    bubblesort(vet);
    printf("Vetor em ordem \n");
    for(int i = 0 ; i < 10 ; i++){
        printf("%i     ", vet[i]);
    }
}

void bubblesort( int vet[10]){
    int temp;
    for(int pass = 0 ; pass < (10-1) ; pass++){
        for(int i = 0 ; i < (10 -1 ); i++){
            if(vet[i] > vet[i +1]){
                temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
    }


}