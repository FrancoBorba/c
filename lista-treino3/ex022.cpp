#include<stdio.h>

void ler_matriz( int mat[3][3]);
void imprime_matriz( int mat[3][3]);
int soma_linha(int l , int mat[3][3]);
int multi_coluna(int c , int mat[3][3]);

int main(){
    int l , c, soma , multiplicacao;

    int mat[3][3];
    ler_matriz(mat);
    imprime_matriz(mat);

    printf("Digite a linha que deseja somar\n");
    scanf("%i",&l);
    soma = soma_linha( l , mat);
    printf(" A soma foi %i\n",soma);
    printf("Digite a coluna que deseja multiplicar\n");
    scanf("%i",&c);
    multiplicacao = multi_coluna(c , mat);
    printf(" O resultado foi %i \n",multiplicacao);



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
int soma_linha(int l , int mat[3][3]){
    int soma = 0;
    for(int i = 0 ; i < 3 ; i++){
        soma = soma + mat[l-1][i];
    }

    return soma;

}
int multi_coluna(int c , int mat[3][3]){
    int resp = 1;
    for( int i = 0 ; i < 3 ; i++){
        resp = resp * mat[i][c-1];
    }
    return resp;
}