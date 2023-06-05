#include<stdio.h>


int transformador(int);
int main(){

    int metros;

    printf("Digite a medida em metros\n");
    scanf("%i",&metros);
    transformador(metros);
}

int transformador( int metros){

    int deci , centi , mili;

    deci = metros * 10;
    centi = metros *100;
    mili = metros * 1000;
    printf(" A medida em decimetros = %i\n",deci);
    printf(" A medida em centimetros = %i\n",centi);
    printf(" A medida em milimetros = %i\n",mili);

    return 0;
}