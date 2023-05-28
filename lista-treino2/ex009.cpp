#include<stdio.h>

int tempo(int , int , int , int);

int main(){

    int horas_comeco , minutos_comeco , horas_termino , minutos_termino , result;

    printf("Digite a hora e o minuto separados do comeco do jogo\n");
    scanf("%i",&horas_comeco );
    scanf("%i",&minutos_comeco);
    printf("Digite a hora e os minutos separados do termino do jogo\n");
    scanf("%i " ,&horas_termino );
    scanf("%i",&minutos_termino);
    result = tempo(horas_comeco, minutos_comeco , horas_termino , minutos_termino);
    printf("%i", result);

}

int tempo( int hi , int mi , int ht , int mt){

    int totc , tott , resp ;

    totc = hi*60 + mi;
    tott = ht*60 + mt;

    if(totc < tott){
        resp = tott - totc;
    }
    else{
      resp =  tott + (24*60) - totc;
    }
    
    return resp;
}