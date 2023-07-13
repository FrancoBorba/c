#include<stdio.h>

int main(){
    int mat[3][10];

    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 10 ; j++){
            printf("Digite o elemento da linha %i e coluna %i \n",i,j);
			scanf("%i",&mat[i][j]);
        }
    }
    for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			
			printf("%i     ",mat[i][j]);
			
		}
		printf("\n");
	}
	
}