#include<stdio.h>

int main(){
    int l , l1, c , soma=0 , mult=1;
    printf("Digite a quantidade de linhas da matriz \n");
    scanf("%i",&l);
     printf("Digite a quantidade de colunas da matriz \n");
    scanf("%i",&c);

    int mat[l][c] ;

    for(int i = 0 ; i < l ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Digite o elemento da linha %i e coluna %i \n",i,j);
            scanf("%i",&mat[i][j]);
        }
    }
    for( int i = 0 ; i < l ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%i     ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Digite qual linha deseja somar \n");
    scanf("%i",&l1);
    for(int i = 0 ; i < c ; i++){
        
            soma = soma + mat[l1-1][i];
        
    }
    printf(" A soma da linha foi %i \n", soma);

    printf("Digite qual coluna deseja operar\n");
    scanf("%i",&c);
    

    for( int i = 0 ; i < l ; i++){
        mult = mult * mat[i][c-1];
    }
    printf(" O resultado da coluna foi %i\n",mult);



}