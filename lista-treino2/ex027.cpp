#include<stdio.h>
#include<cstdlib>
#include<ctime>

int cara_coroa();
int lancamentos(int);

int main(){
    int quantidade ;
    srand(time(0));
    printf("Digite quantos lançamentos deseja fazer\n");
    scanf("%i", &quantidade);

   lancamentos(quantidade);
   
   
    


}

int cara_coroa(){

    int a ;
    a = 1 + rand()%2;

    if(a % 2 == 0){
        
        a = 0;
    }
    else{
        
        a = 1;
    }
    return a;
}

int lancamentos(int n){
    
    float cara = 0 , coroa = 0, i  ;
    float totcara, totcoroa;
    
    for( i = 1 ; i <= n ; i++){
        
       if( cara_coroa()== 0){
        cara++;
        printf("CARA\n");
       }
       else{
        coroa++;
        printf("COROA\n");
       }
    }
    printf("%f\n",i);

    totcara = cara/(i-1)*100;

    totcoroa = coroa/(i-1)*100;


   

    printf("PORCENTAGEM CARA = %f \n", totcara);
    printf("PORCENTAGEM COROA = %f \n", totcoroa);

    return 0;
}