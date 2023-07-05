#include<stdio.h>
#include<cstdlib>
#include<ctime>


void bubllesortmelhor(int vet1[500]);
void bubllesort(int vet2[500]);
void imprimevetor(int vet[]);

int main(){
 
    srand(time(0));
    int vet1[500];
    int vet2[500];
    for(int i = 0 ; i  < 500 ; i++){
        vet1[i] = 1 + rand() % 100; 
    }
    for(int i = 0 ; i  < 500 ; i++){   
        vet2[i] = 1 + rand() % 100;
    }
    
    bubllesort(vet1);
    bubllesortmelhor(vet2);
    printf("Vetor1 = \n");
    imprimevetor(vet1);
    printf("Vetor2 = \n");
    imprimevetor(vet2);
    



}

void bubllesort(int vet2[500]){
    int controle;

    for( int pass = 0 ; pass < (500 -1) ; pass++){
        for( int i = 0 ; i < (500 -1); i++){
            if(vet2[i] > vet2[i +1]){
                controle = vet2[i];
                vet2[i] = vet2[i+1];
                vet2[i+1] = controle;
            }
        }
    }
}

 void bubllesortmelhor(int vet1[500]){
    bool troca;
    int passagem = 0;

    do {
        
        troca = false;

        for (int i = 0; i < 500 - passagem - 1; i++) {
            
            if (vet1[i] > vet1[i + 1]) {
                
                int controle = vet1[i];
                vet1[i] = vet1[i + 1];
                vet1[i + 1] = controle;
                troca = true;

            }

        }
        
        passagem++;

    } while(troca);

} 

void imprimevetor(int vet[500]){
    
    for(int i = 0 ; i < 500 ; i++ ){
        printf("%i      ",vet[i]);
    }

}
