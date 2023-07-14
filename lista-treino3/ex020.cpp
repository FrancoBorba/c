#include<stdio.h>
 
int main(){
    int l , c;
    printf("Digite a quantidade de linhas da matriz \n");
    scanf("%i",&l);
     printf("Digite a quantidade de colunas da matriz \n");
    scanf("%i",&c);
    int mata[l][c] , matb[l][c];

     for(int i = 0 ; i < l ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Digite o elemento da linha %i e coluna %i \n",i,j);
            scanf("%i",&mata[i][j]);
        }
    }
    
        

    for( int i = 0 ; i < l ; i++){
        for(int j = 0 ; j < c ; j++){
           matb[i][j] = mata[i][j];
        }
    }
   
     for(int i = 0 ; i < l ; i++){
		for(int j = 0 ; j < c ; j++){
			
			printf("%i     ",matb[i][j]);
			
		}
		printf("\n");
	}
    
}