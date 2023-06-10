#include<stdio.h>

float divisao(float, float&);

int main(){

	float n1 , n2 ;
	printf("Digite o divisor \n");
	scanf("%f",&n1);
	fflush(stdout);
	printf("Digite o divididendo \n");
	scanf("%f",&n2);
	divisao( n1, n2);
	printf("%f", n2);
	


}

float divisao(float m , float& n){
	
	
	if( n == 0){
		return  0;
	}
	else{
		n = m/n;
		return 1;
		
	}
	

	
}