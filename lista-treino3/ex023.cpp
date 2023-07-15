#include<stdio.h>

 void max_matriz(  int mat[3][3] , int &l , int &c , int &max);
 void ler_matriz( int mat[3][3]);
 void imprime_matriz( int mat[3][3]);
int main(){
    int mat[3][3];
    int l , c , max;
    ler_matriz(mat);
    imprime_matriz(mat);

    max_matriz( mat , l , c , max);
    printf(" O maximo foi %i na linha %i e coluna %i \n", max , l , c);

}
void ler_matriz( int mat[3][3]){
     
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Digite o elemento da linha %i e coluna %i \n",i,j);
            scanf("%i",&mat[i][j]);
        }
    }
}
void imprime_matriz( int mat[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%i    ",mat[i][j]);
            
        }
        printf("\n");   
    }
}

void max_matriz(int mat[3][3] , int &l , int &c , int &max){

    max = 0;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            
            if( mat[i][j] > max){
                max = mat[i][j];
                l = i +1;
                c = j +1;
            }
        }
    }
}