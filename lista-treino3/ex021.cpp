#include<stdio.h>

int main(){

    int mat[6][4] , max = 0 , l , c;

    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("Digite o elemento da linha %i e coluna %i \n",i,j);
            scanf("%i",&mat[i][j]);
        }
    }
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            
            if( mat[i][j] > max){
                max = mat[i][j];
                l = i +1;
                c = j +1;
            }
        }
    }
    printf(" O numero maximo foi %i da linha %i e coluna %i\n",max,l,c);



}